// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Poison.h"
#include "Roserade.generated.h"

/**
 * 
 */
UCLASS()
class PMV_API ARoserade : public APoison
{
	GENERATED_BODY()

private:
	int Poids;

	bool actif;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Caracteristique", meta = (AllowPrivateAccess = true))
		int Taille;
	UFUNCTION(BlueprintCallable, Category = "Caracteristique")
		void setPoids(int kilo);
	UFUNCTION(BlueprintCallable, Category = "Caracteristique")
		int getPoids();

	UFUNCTION(BlueprintCallable, Category = "Caracteristique")
		void Attouchement();
	
};
