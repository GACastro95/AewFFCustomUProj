// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponGunBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponGunBullet() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGunBullet_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGunBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponGunBullet::execOnProjectileImpact)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileImpact(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponGunBullet::execSetup)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inAttackUser);
		P_GET_PROPERTY(FIntProperty,Z_Param_inWeaponId);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMoveId);
		P_GET_PROPERTY(FIntProperty,Z_Param_inStateHash);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_inAttackUser,Z_Param_inWeaponId,Z_Param_inMoveId,Z_Param_inStateHash);
		P_NATIVE_END;
	}
	void AELSSWeaponGunBullet::StaticRegisterNativesAELSSWeaponGunBullet()
	{
		UClass* Class = AELSSWeaponGunBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileImpact", &AELSSWeaponGunBullet::execOnProjectileImpact },
			{ "Setup", &AELSSWeaponGunBullet::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics
	{
		struct ELSSWeaponGunBullet_eventOnProjectileImpact_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGunBullet, nullptr, "OnProjectileImpact", nullptr, nullptr, sizeof(ELSSWeaponGunBullet_eventOnProjectileImpact_Parms), Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics
	{
		struct ELSSWeaponGunBullet_eventSetup_Parms
		{
			AELSSPlayer* inAttackUser;
			int32 inWeaponId;
			int32 inMoveId;
			int32 inStateHash;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inAttackUser;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inWeaponId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStateHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inAttackUser = { "inAttackUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventSetup_Parms, inAttackUser), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inWeaponId = { "inWeaponId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventSetup_Parms, inWeaponId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inMoveId = { "inMoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventSetup_Parms, inMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inStateHash = { "inStateHash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponGunBullet_eventSetup_Parms, inStateHash), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inAttackUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inWeaponId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::NewProp_inStateHash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponGunBullet, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSWeaponGunBullet_eventSetup_Parms), Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponGunBullet_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponGunBullet_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponGunBullet_NoRegister()
	{
		return AELSSWeaponGunBullet::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponGunBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoneHit_MetaData[];
#endif
		static void NewProp_DoneHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoneHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticEffectActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallisticEffectActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectToFieldRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitEffectToFieldRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallisticEffectRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BallisticEffectRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideDecalThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideDecalThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDecalDelaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayDecalDelaySec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreGravityTimeRemain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreGravityTimeRemain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreGravityTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreGravityTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeforeHitCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BeforeHitCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeforeHitGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeforeHitGravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterHitCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AfterHitCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterHitGravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterHitGravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterHitLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterHitLifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponGunBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponGunBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponGunBullet_OnProjectileImpact, "OnProjectileImpact" }, // 1215280749
		{ &Z_Construct_UFunction_AELSSWeaponGunBullet_Setup, "Setup" }, // 3470535507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponGunBullet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BulletOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, BulletOwner), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BulletOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BulletOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, MoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_MoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, WeaponID), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_WeaponID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit_SetBit(void* Obj)
	{
		((AELSSWeaponGunBullet*)Obj)->DoneHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit = { "DoneHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWeaponGunBullet), &Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SavedHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SavedHit = { "SavedHit", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, SavedHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SavedHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SavedHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectActor = { "BallisticEffectActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, BallisticEffectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_HitEffectToFieldRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_HitEffectToFieldRowName = { "HitEffectToFieldRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, HitEffectToFieldRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_HitEffectToFieldRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_HitEffectToFieldRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectRowName = { "BallisticEffectRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, BallisticEffectRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_OverrideDecalThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_OverrideDecalThickness = { "OverrideDecalThickness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, OverrideDecalThickness), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_OverrideDecalThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_OverrideDecalThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_PlayDecalDelaySec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_PlayDecalDelaySec = { "PlayDecalDelaySec", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, PlayDecalDelaySec), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_PlayDecalDelaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_PlayDecalDelaySec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTimeRemain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTimeRemain = { "IgnoreGravityTimeRemain", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, IgnoreGravityTimeRemain), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTimeRemain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTimeRemain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTime = { "IgnoreGravityTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, IgnoreGravityTime), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitCollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitCollisionProfile = { "BeforeHitCollisionProfile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, BeforeHitCollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitGravityScale = { "BeforeHitGravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, BeforeHitGravityScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitGravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitCollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitCollisionProfile = { "AfterHitCollisionProfile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitCollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitCollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitGravityScale = { "AfterHitGravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitGravityScale), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitGravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitGravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitLifeSpan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponGunBullet" },
		{ "ModuleRelativePath", "Public/ELSSWeaponGunBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitLifeSpan = { "AfterHitLifeSpan", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitLifeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponGunBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BulletOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_DoneHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_SavedHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_HitEffectToFieldRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BallisticEffectRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_OverrideDecalThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_PlayDecalDelaySec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTimeRemain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_IgnoreGravityTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_BeforeHitGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitGravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponGunBullet_Statics::NewProp_AfterHitLifeSpan,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWeaponGunBullet, IELSSActorCommonInterface), false },
			{ Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWeaponGunBullet, IELSSWeaponProjectileInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponGunBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponGunBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponGunBullet_Statics::ClassParams = {
		&AELSSWeaponGunBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponGunBullet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponGunBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponGunBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponGunBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponGunBullet, 64773147);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponGunBullet>()
	{
		return AELSSWeaponGunBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponGunBullet(Z_Construct_UClass_AELSSWeaponGunBullet, &AELSSWeaponGunBullet::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponGunBullet"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponGunBullet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BulletOwner(TEXT("BulletOwner"));
		static const FName Name_MoveId(TEXT("MoveId"));
		static const FName Name_WeaponID(TEXT("WeaponID"));

		const bool bIsValid = true
			&& Name_BulletOwner == ClassReps[(int32)ENetFields_Private::BulletOwner].Property->GetFName()
			&& Name_MoveId == ClassReps[(int32)ENetFields_Private::MoveId].Property->GetFName()
			&& Name_WeaponID == ClassReps[(int32)ENetFields_Private::WeaponID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponGunBullet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponGunBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
