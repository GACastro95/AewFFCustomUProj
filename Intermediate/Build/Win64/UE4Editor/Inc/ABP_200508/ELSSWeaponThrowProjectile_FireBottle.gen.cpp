// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrowProjectile_FireBottle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrowProjectile_FireBottle() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_FireBottle::execOnBeginOverlapTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapTrigger(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_FireBottle::execOnEndOverlapTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapTrigger(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_FireBottle::execPerformOnImpact_Multicast)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_NewLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformOnImpact_Multicast_Implementation(Z_Param_NewLocation,Z_Param_inYaw);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast = FName(TEXT("PerformOnImpact_Multicast"));
	void AELSSWeaponThrowProjectile_FireBottle::PerformOnImpact_Multicast(FVector_NetQuantize10 const& NewLocation, float inYaw)
	{
		ELSSWeaponThrowProjectile_FireBottle_eventPerformOnImpact_Multicast_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.inYaw=inYaw;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast),&Parms);
	}
	static FName NAME_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl = FName(TEXT("PlayBurnLoopSE_Impl"));
	int32 AELSSWeaponThrowProjectile_FireBottle::PlayBurnLoopSE_Impl()
	{
		ELSSWeaponThrowProjectile_FireBottle_eventPlayBurnLoopSE_Impl_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl),&Parms);
		return Parms.ReturnValue;
	}
	void AELSSWeaponThrowProjectile_FireBottle::StaticRegisterNativesAELSSWeaponThrowProjectile_FireBottle()
	{
		UClass* Class = AELSSWeaponThrowProjectile_FireBottle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapTrigger", &AELSSWeaponThrowProjectile_FireBottle::execOnBeginOverlapTrigger },
			{ "OnEndOverlapTrigger", &AELSSWeaponThrowProjectile_FireBottle::execOnEndOverlapTrigger },
			{ "PerformOnImpact_Multicast", &AELSSWeaponThrowProjectile_FireBottle::execPerformOnImpact_Multicast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics
	{
		struct ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms), &Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle, nullptr, "OnBeginOverlapTrigger", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_FireBottle_eventOnBeginOverlapTrigger_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics
	{
		struct ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle, nullptr, "OnEndOverlapTrigger", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_FireBottle_eventOnEndOverlapTrigger_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventPerformOnImpact_Multicast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_inYaw = { "inYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventPerformOnImpact_Multicast_Parms, inYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::NewProp_inYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle, nullptr, "PerformOnImpact_Multicast", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_FireBottle_eventPerformOnImpact_Multicast_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_FireBottle_eventPlayBurnLoopSE_Impl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle, nullptr, "PlayBurnLoopSE_Impl", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_FireBottle_eventPlayBurnLoopSE_Impl_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_NoRegister()
	{
		return AELSSWeaponThrowProjectile_FireBottle::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanAfterImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanAfterImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashEffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SplashEffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadPlacementProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpreadPlacementProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceOnImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceOnImpact;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingPlayer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadStatusDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BadStatusDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadStatusIntervalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BadStatusIntervalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponThrowProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnBeginOverlapTrigger, "OnBeginOverlapTrigger" }, // 1898269570
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_OnEndOverlapTrigger, "OnEndOverlapTrigger" }, // 1775473071
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PerformOnImpact_Multicast, "PerformOnImpact_Multicast" }, // 3383567913
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_FireBottle_PlayBurnLoopSE_Impl, "PlayBurnLoopSE_Impl" }, // 4001402970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrowProjectile_FireBottle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TriggerCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TriggerCollision = { "TriggerCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, TriggerCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TriggerCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TriggerCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_LifeSpanAfterImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_LifeSpanAfterImpact = { "LifeSpanAfterImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, LifeSpanAfterImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_LifeSpanAfterImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_LifeSpanAfterImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SplashEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SplashEffectDatabaseRowName = { "SplashEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, SplashEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SplashEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SplashEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SpreadPlacementProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SpreadPlacementProfileName = { "SpreadPlacementProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, SpreadPlacementProfileName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SpreadPlacementProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SpreadPlacementProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TraceDistanceOnImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TraceDistanceOnImpact = { "TraceDistanceOnImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, TraceDistanceOnImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TraceDistanceOnImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TraceDistanceOnImpact_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer_Inner = { "OverlappingPlayer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer = { "OverlappingPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, OverlappingPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusDuration = { "BadStatusDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, BadStatusDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusIntervalTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_FireBottle" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_FireBottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusIntervalTime = { "BadStatusIntervalTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, BadStatusIntervalTime), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusIntervalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusIntervalTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TriggerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_LifeSpanAfterImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SplashEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_SpreadPlacementProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_TraceDistanceOnImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_OverlappingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::NewProp_BadStatusIntervalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrowProjectile_FireBottle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::ClassParams = {
		&AELSSWeaponThrowProjectile_FireBottle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrowProjectile_FireBottle, 2248564322);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrowProjectile_FireBottle>()
	{
		return AELSSWeaponThrowProjectile_FireBottle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrowProjectile_FireBottle(Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle, &AELSSWeaponThrowProjectile_FireBottle::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrowProjectile_FireBottle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrowProjectile_FireBottle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
