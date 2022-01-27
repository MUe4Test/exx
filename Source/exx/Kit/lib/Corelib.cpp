// Fill out your copyright notice in the Description page of Project Settings.


#include "Corelib.h"
#include "../CoreGameInstance.h"

UFrameControllerBase* UCorelib::getController(FName controllerName)
{
	UCoreGameInstance* CoreGameInstance = UCoreGameInstance::get();
	return CoreGameInstance->getController(controllerName);
}
