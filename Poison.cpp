// Fill out your copyright notice in the Description page of Project Settings.


#include "Poison.h"

// Sets default values
APoison::APoison()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mailles = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Corps Pokemon"));
	this->RootComponent = this->mailles;
	this->getMailles()->SetSimulatePhysics(true);
}

void APoison::ramasser_Implementation()
{
	UE_LOG(LogClass, Log, TEXT("APoison::ramasser_Implementation()"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("APoison::ramasser_Implementation()"));
}

// Called when the game starts or when spawned
void APoison::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APoison::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

