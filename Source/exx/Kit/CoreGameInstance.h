// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CoreGameInstance.generated.h"

class UFrameControllerBase;

/**
 * 
 */
UCLASS()
class EXX_API UCoreGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	static UCoreGameInstance* get();


	UFrameControllerBase* getController(FName controllersName);
private:
	void createControllers();
	void initControllers();

private:
	static UCoreGameInstance* coreGameInstance;
	UPROPERTY()
		TMap<FName, UFrameControllerBase*> FrameControllers;

	/*UPROPERTY()
		TScriptInterface<>  uiManager;*/
};
