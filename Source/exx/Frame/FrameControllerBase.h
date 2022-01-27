// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FrameControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class EXX_API UFrameControllerBase : public UObject
{
	GENERATED_BODY()
public:
	virtual void initData();

	UPROPERTY(BlueprintReadWrite)
		int32 testData = 12;

	
};
