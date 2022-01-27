#pragma once

#include "CoreMinimal.h"
#include "../UI/MyWidgetBase.h"
#include "ManagerStruct.generated.h"


USTRUCT(BlueprintType)
struct FManagerUIType
{
	GENERATED_USTRUCT_BODY()

	//widget的应用
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UMyWidgetBase> widgetRef;

	//功能描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText des;
};