// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class EXX_API UMyWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	/**
	 * UI初始化，只有在UI创建的时候会调用,
	 不通过控件自身的构造方法进行事件绑定是为了完全自己可控
	 */
	virtual void initData();

	virtual void onShowWidget();

	virtual void onCollapsedWidget();

protected:
	//提供给蓝图的UI初始化函数，由C++层的initData调用蓝图的InitData
	UFUNCTION(BlueprintImplementableEvent,Category = "WidgetBase")
	   void initBPData();

	UFUNCTION(BlueprintImplementableEvent, Category = "WidgetBase")
		void onShowWidgetBP();

	UFUNCTION(BlueprintImplementableEvent, Category = "WidgetBase")
		void onCollapsedWidgetBP();
	
};
