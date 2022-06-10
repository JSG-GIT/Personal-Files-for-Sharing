// Fill out your copyright notice in the Description page of Project Settings.


#include "Trigger.h"

// Sets default values for this component's properties
UTrigger::UTrigger()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UTrigger::BeginPlay()
{
	Super::BeginPlay();

    //...
}

// Called every frame
void UTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    TArray<AActor*> Actors;         // Preparing an OutParameter
    GetOverlappingActors(Actors);   // Sets the OutParameter
    for (AActor* ActorPtr : Actors) // Prints out all overlapping KEY Actors to the log
    {
        if (ActorPtr->ActorHasTag(AcceptableTag))
        {
            UE_LOG(LogTemp, Display, TEXT("Unlocking: %s"), *ActorPtr->GetActorNameOrLabel());
        }

    }

    //...
}
