#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Classes/GameFramework/Actor.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TankAimingComponent.generated.h"

// Forward Declaration
class UTankBarrel;
class UTankTurret;

// Holds Barrels Properties And Elevate Method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BATTLE_TANKS_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet);

	void SetTurretReference(UTankTurret* TurretToSet);

	void AimAt(FVector OutHitLocation, float LaunchSpeed);

private:
	UTankBarrel* Barrel = nullptr;

	UTankTurret* Turret = nullptr;

	void MoveBarrelTowards(FVector AimDirection);
};
