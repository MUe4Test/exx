// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Corelib.generated.h"

class UFrameControllerBase;

/**
 * 
 */
UCLASS()
class EXX_API UCorelib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//获取控制器
	UFUNCTION(BlueprintCallable)
		static UFrameControllerBase* getController( FName controllerName);

	//UFUNCTION(BlueprintCallable)
	

	
};
