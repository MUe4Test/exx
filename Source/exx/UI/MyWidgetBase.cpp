// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWidgetBase.h"

void UMyWidgetBase::initData()
{
	initBPData();
}

void UMyWidgetBase::onShowWidget()
{
	onShowWidgetBP();
}

void UMyWidgetBase::onCollapsedWidget()
{
	onCollapsedWidgetBP();
}
