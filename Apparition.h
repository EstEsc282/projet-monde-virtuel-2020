// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Poison.h"
#include "PMVCharacter.h"
#include "Apparition.generated.h"

UCLASS()
class PMV_API AApparition : public AActor
{
	GENERATED_BODY()

private: 
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Apparition", meta = (AllowPrivateAccess=true))
	class UBoxComponent* zapp;
	UPROPERTY(EditAnywhere, Category = "Apparition")
	TSubclassOf<class APoison> objet;

public:
	// Sets default values for this actor's properties
	AApparition();
	FORCEINLINE class UBoxComponent* getZapp() const { return this->zapp;  }
	UFUNCTION(BlueprintPure, Category = "Apparition")
	FVector getPHasard();

	void apparaitre();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle minuteur;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
