// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "../../Struct/ManagerStruct.h"
#include "FrameConfig.generated.h"

class UFrameControllerBase;
/**
 * 
 */
UCLASS(config = Game)
class EXX_API UFrameConfig : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(config, EditAnywhere, Category = "FrameConfig | ControllerConfig")
		TMap<FName,TSubclassOf<UFrameControllerBase>> FrameController;

	UPROPERTY(config, EditAnywhere, Category = "FrameConfig | UIConfig")
		TMap<FName, FManagerUIType> widgetSet;

	
};
