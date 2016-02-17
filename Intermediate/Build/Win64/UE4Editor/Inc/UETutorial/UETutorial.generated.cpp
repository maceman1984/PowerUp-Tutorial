// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UETutorial.h"
#include "UETutorial.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUETutorial() {}
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
	}
	IMPLEMENT_CLASS(AGameHUD, 3300434972);
	void APickup::OnPickedUp()
	{
		ProcessEvent(FindFunctionChecked(UETUTORIAL_OnPickedUp),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		FNativeFunctionRegistrar::RegisterFunction(APickup::StaticClass(),"OnPickedUp",(Native)&APickup::execOnPickedUp);
	}
	IMPLEMENT_CLASS(APickup, 1116972678);
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	IMPLEMENT_CLASS(ABatteryPickup, 1172315082);
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		FNativeFunctionRegistrar::RegisterFunction(ASpawnVolume::StaticClass(),"GetRandomPointInVolume",(Native)&ASpawnVolume::execGetRandomPointInVolume);
	}
	IMPLEMENT_CLASS(ASpawnVolume, 3818529977);
	void AUETutorialCharacter::PowerUp(float BatteryPower)
	{
		UETutorialCharacter_eventPowerUp_Parms Parms;
		Parms.BatteryPower=BatteryPower;
		ProcessEvent(FindFunctionChecked(UETUTORIAL_PowerUp),&Parms);
	}
	void AUETutorialCharacter::StaticRegisterNativesAUETutorialCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(AUETutorialCharacter::StaticClass(),"CollectBatteries",(Native)&AUETutorialCharacter::execCollectBatteries);
	}
	IMPLEMENT_CLASS(AUETutorialCharacter, 177886906);
	void AUETutorialGameMode::StaticRegisterNativesAUETutorialGameMode()
	{
	}
	IMPLEMENT_CLASS(AUETutorialGameMode, 4273158138);
FName UETUTORIAL_OnPickedUp = FName(TEXT("OnPickedUp"));
FName UETUTORIAL_PowerUp = FName(TEXT("PowerUp"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	UETUTORIAL_API class UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_AGameHUD();
	UETUTORIAL_API class UFunction* Z_Construct_UFunction_APickup_OnPickedUp();
	UETUTORIAL_API class UClass* Z_Construct_UClass_APickup_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_APickup();
	UETUTORIAL_API class UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_ABatteryPickup();
	UETUTORIAL_API class UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume();
	UETUTORIAL_API class UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_ASpawnVolume();
	UETUTORIAL_API class UFunction* Z_Construct_UFunction_AUETutorialCharacter_CollectBatteries();
	UETUTORIAL_API class UFunction* Z_Construct_UFunction_AUETutorialCharacter_PowerUp();
	UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialCharacter_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialCharacter();
	UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialGameMode_NoRegister();
	UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialGameMode();
	UETUTORIAL_API class UPackage* Z_Construct_UPackage_UETutorial();
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage_UETutorial();
			OuterClass = AGameHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_HUDFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDFont"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(HUDFont, AGameHUD), 0x0000000000000000, Z_Construct_UClass_UFont_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ModuleRelativePath"), TEXT("GameHUD.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameHUD(Z_Construct_UClass_AGameHUD, TEXT("AGameHUD"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	UFunction* Z_Construct_UFunction_APickup_OnPickedUp()
	{
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPickedUp"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Default onPickUp behavior"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_UETutorial();
			OuterClass = APickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APickup_OnPickedUp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PickupMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(PickupMesh, APickup), 0x00000000000b001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_BaseCollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseCollisionComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(BaseCollisionComponent, APickup), 0x00000000000b001d, Z_Construct_UClass_USphereComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsActive, APickup, bool);
				UProperty* NewProp_bIsActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsActive"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsActive, APickup), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsActive, APickup), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APickup_OnPickedUp()); // 764939054
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_BaseCollisionComponent, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_BaseCollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BaseCollisionComponent, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_BaseCollisionComponent, TEXT("ToolTip"), TEXT("Collision sphere"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("ToolTip"), TEXT("True when able to be picked up. False when already picked up."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, TEXT("APickup"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage_UETutorial();
			OuterClass = ABatteryPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PowerLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerLevel"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(PowerLevel, ABatteryPickup), 0x0000000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(NewProp_PowerLevel, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_PowerLevel, TEXT("ModuleRelativePath"), TEXT("BatteryPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, TEXT("ABatteryPickup"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
	{
		struct SpawnVolume_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ASpawnVolume();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRandomPointInVolume"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14820401, 65535, sizeof(SpawnVolume_eventGetRandomPointInVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SpawnVolume_eventGetRandomPointInVolume_Parms), 0x0000000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Spawning"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_UETutorial();
			OuterClass = ASpawnVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SpawnDelayRangeHigh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeHigh"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeHigh, ASpawnVolume), 0x0000000000000005);
				UProperty* NewProp_SpawnDelayRangeLow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeLow"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeLow, ASpawnVolume), 0x0000000000000005);
				UProperty* NewProp_WhatToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhatToSpawn"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(WhatToSpawn, ASpawnVolume), 0x0000000000000001, Z_Construct_UClass_UObject_NoRegister());
				UProperty* NewProp_WhereToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhereToSpawn"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(WhereToSpawn, ASpawnVolume), 0x00000000000a0809, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()); // 2407917431
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, TEXT("ASpawnVolume"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
	UFunction* Z_Construct_UFunction_AUETutorialCharacter_CollectBatteries()
	{
		UObject* Outer=Z_Construct_UClass_AUETutorialCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CollectBatteries"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUETutorialCharacter_PowerUp()
	{
		UObject* Outer=Z_Construct_UClass_AUETutorialCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PowerUp"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08080800, 65535, sizeof(UETutorialCharacter_eventPowerUp_Parms));
			UProperty* NewProp_BatteryPower = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BatteryPower"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BatteryPower, UETutorialCharacter_eventPowerUp_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUETutorialCharacter_NoRegister()
	{
		return AUETutorialCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AUETutorialCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_UETutorial();
			OuterClass = AUETutorialCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AUETutorialCharacter_CollectBatteries());
				OuterClass->LinkChild(Z_Construct_UFunction_AUETutorialCharacter_PowerUp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AUETutorialCharacter), 0x0000000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AUETutorialCharacter), 0x0000000000020015);
				UProperty* NewProp_BaseSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseSpeed, AUETutorialCharacter), 0x0000000000020005);
				UProperty* NewProp_SpeedFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedFactor"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(SpeedFactor, AUETutorialCharacter), 0x0000000000020005);
				UProperty* NewProp_PowerLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerLevel"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(PowerLevel, AUETutorialCharacter), 0x0000000000020005);
				UProperty* NewProp_CollectionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphere"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollectionSphere, AUETutorialCharacter), 0x00000000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AUETutorialCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AUETutorialCharacter), 0x00000000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AUETutorialCharacter_CollectBatteries()); // 1617788608
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AUETutorialCharacter_PowerUp()); // 3398132656
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_BaseSpeed, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_SpeedFactor, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_PowerLevel, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_PowerLevel, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("UETutorialCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUETutorialCharacter(Z_Construct_UClass_AUETutorialCharacter, TEXT("AUETutorialCharacter"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUETutorialCharacter);
	UClass* Z_Construct_UClass_AUETutorialGameMode_NoRegister()
	{
		return AUETutorialGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUETutorialGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_UETutorial();
			OuterClass = AUETutorialGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DecayRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DecayRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(DecayRate, AUETutorialGameMode), 0x0000000000010005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UETutorialGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UETutorialGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ModuleRelativePath"), TEXT("UETutorialGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUETutorialGameMode(Z_Construct_UClass_AUETutorialGameMode, TEXT("AUETutorialGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUETutorialGameMode);
	UPackage* Z_Construct_UPackage_UETutorial()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/UETutorial")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xABF055FC;
			Guid.B = 0x80F4BE30;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
