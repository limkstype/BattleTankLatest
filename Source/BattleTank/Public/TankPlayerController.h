// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector &HitLocation) const;
	ATank* GetControlledTank() const; // Make ATank address Pointer to GetControlledTank (GetControlledTank is a variable)

	// Use this Vector2D multiply Viewport size then we can get the crosshair location to world location.
	UPROPERTY(EditAnywhere)
	float CrosshairLocationX = 0.5f; // X and Y must be the same percent as the crosshair in the widget.
	UPROPERTY(EditAnywhere)
	float CrosshairLocationY = 0.333f;

	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
