// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrowProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrowProjectile() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrow_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileHitInfo();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnProjectileBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBounce(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnProjectileImpact)
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
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnProjectileImpactForClient)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileImpactForClient(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnRep_HitInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HitInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnRep_LaunchInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LaunchInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	void AELSSWeaponThrowProjectile::StaticRegisterNativesAELSSWeaponThrowProjectile()
	{
		UClass* Class = AELSSWeaponThrowProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileBounce", &AELSSWeaponThrowProjectile::execOnProjectileBounce },
			{ "OnProjectileImpact", &AELSSWeaponThrowProjectile::execOnProjectileImpact },
			{ "OnProjectileImpactForClient", &AELSSWeaponThrowProjectile::execOnProjectileImpactForClient },
			{ "OnRep_HitInfo", &AELSSWeaponThrowProjectile::execOnRep_HitInfo },
			{ "OnRep_LaunchInfo", &AELSSWeaponThrowProjectile::execOnRep_LaunchInfo },
			{ "OnRep_State", &AELSSWeaponThrowProjectile::execOnRep_State },
			{ "SetExternalVisible", &AELSSWeaponThrowProjectile::execSetExternalVisible },
			{ "SetInternalVisible", &AELSSWeaponThrowProjectile::execSetInternalVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics
	{
		struct ELSSWeaponThrowProjectile_eventOnProjectileBounce_Parms
		{
			FHitResult ImpactResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileBounce_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnProjectileBounce", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_eventOnProjectileBounce_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics
	{
		struct ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnProjectileImpact", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_eventOnProjectileImpact_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics
	{
		struct ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnProjectileImpactForClient", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_eventOnProjectileImpactForClient_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnRep_HitInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnRep_LaunchInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics
	{
		struct ELSSWeaponThrowProjectile_eventSetExternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWeaponThrowProjectile_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponThrowProjectile_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics
	{
		struct ELSSWeaponThrowProjectile_eventSetInternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSWeaponThrowProjectile_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponThrowProjectile_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister()
	{
		return AELSSWeaponThrowProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDesignComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDesignComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectileType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProjectileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileBounce, "OnProjectileBounce" }, // 3219149444
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpact, "OnProjectileImpact" }, // 560465346
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnProjectileImpactForClient, "OnProjectileImpactForClient" }, // 18155227
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_HitInfo, "OnRep_HitInfo" }, // 3532349598
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_LaunchInfo, "OnRep_LaunchInfo" }, // 2740230182
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_OnRep_State, "OnRep_State" }, // 2683388754
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetExternalVisible, "SetExternalVisible" }, // 4164346981
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_SetInternalVisible, "SetInternalVisible" }, // 3908835964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrowProjectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_UserDesignComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_UserDesignComponent = { "UserDesignComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, UserDesignComponent), Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_UserDesignComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_UserDesignComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, ProjectileType), Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileType, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_OwnerWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_OwnerWeapon = { "OwnerWeapon", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, OwnerWeapon), Z_Construct_UClass_AELSSWeaponThrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_OwnerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_OwnerWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, WeaponID), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_WeaponID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, MoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_MoveId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, State), Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_LaunchInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_LaunchInfo = { "LaunchInfo", "OnRep_LaunchInfo", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, LaunchInfo), Z_Construct_UScriptStruct_FSSProjectileLaunchInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_LaunchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_LaunchInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_HitInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_HitInfo = { "HitInfo", "OnRep_HitInfo", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, HitInfo), Z_Construct_UScriptStruct_FSSProjectileHitInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_HitInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_EffectRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_EffectRadius = { "EffectRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile, EffectRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_EffectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_EffectRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_UserDesignComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_ProjectileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_OwnerWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_LaunchInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::NewProp_EffectRadius,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWeaponThrowProjectile, IELSSActorCommonInterface), false },
			{ Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSWeaponThrowProjectile, IELSSWeaponProjectileInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrowProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::ClassParams = {
		&AELSSWeaponThrowProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrowProjectile, 479142146);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrowProjectile>()
	{
		return AELSSWeaponThrowProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrowProjectile(Z_Construct_UClass_AELSSWeaponThrowProjectile, &AELSSWeaponThrowProjectile::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrowProjectile"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponThrowProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnerWeapon(TEXT("OwnerWeapon"));
		static const FName Name_WeaponID(TEXT("WeaponID"));
		static const FName Name_MoveId(TEXT("MoveId"));
		static const FName Name_State(TEXT("State"));
		static const FName Name_LaunchInfo(TEXT("LaunchInfo"));
		static const FName Name_HitInfo(TEXT("HitInfo"));

		const bool bIsValid = true
			&& Name_OwnerWeapon == ClassReps[(int32)ENetFields_Private::OwnerWeapon].Property->GetFName()
			&& Name_WeaponID == ClassReps[(int32)ENetFields_Private::WeaponID].Property->GetFName()
			&& Name_MoveId == ClassReps[(int32)ENetFields_Private::MoveId].Property->GetFName()
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_LaunchInfo == ClassReps[(int32)ENetFields_Private::LaunchInfo].Property->GetFName()
			&& Name_HitInfo == ClassReps[(int32)ENetFields_Private::HitInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponThrowProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrowProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
