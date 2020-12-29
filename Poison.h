// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Poison.generated.h"

UCLASS()
class PMV_API APoison : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Caracteristique", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* mailles;
public:	
	// Sets default values for this actor's properties
	APoison();
	FORCEINLINE class UStaticMeshComponent* getMailles() const { return this->mailles; }
	UFUNCTION(BlueprintNativeEvent)
	void ramasser();
	virtual void ramasser_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
