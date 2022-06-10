// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Trigger.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPT_RAIDER_API UTrigger : public UBoxComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTrigger();

protected:
	// Called when the game starts
	void BeginPlay();

public:	
	// Called every frame
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

private:

	UPROPERTY(EditAnywhere)
	FName AcceptableTag;
	
};
