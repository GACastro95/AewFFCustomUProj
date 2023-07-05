// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponTrapObject_Barricade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponTrapObject_Barricade() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject_Barricade();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponTrapObject_Barricade::execBreak_Imple)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Break_Imple();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject_Barricade::execOnRep_IsBroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponTrapObject_Barricade::execTakeDamage_Imple)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FSSDamageEvent,Z_Param_Out_SSDamageEvent);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage_Imple(Z_Param_Damage,Z_Param_Out_SSDamageEvent,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void AELSSWeaponTrapObject_Barricade::StaticRegisterNativesAELSSWeaponTrapObject_Barricade()
	{
		UClass* Class = AELSSWeaponTrapObject_Barricade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Break_Imple", &AELSSWeaponTrapObject_Barricade::execBreak_Imple },
			{ "OnRep_IsBroken", &AELSSWeaponTrapObject_Barricade::execOnRep_IsBroken },
			{ "TakeDamage_Imple", &AELSSWeaponTrapObject_Barricade::execTakeDamage_Imple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject_Barricade, nullptr, "Break_Imple", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject_Barricade, nullptr, "OnRep_IsBroken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics
	{
		struct ELSSWeaponTrapObject_Barricade_eventTakeDamage_Imple_Parms
		{
			int32 Damage;
			FSSDamageEvent SSDamageEvent;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSDamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_Barricade_eventTakeDamage_Imple_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_SSDamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_SSDamageEvent = { "SSDamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_Barricade_eventTakeDamage_Imple_Parms, SSDamageEvent), Z_Construct_UScriptStruct_FSSDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_SSDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_SSDamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponTrapObject_Barricade_eventTakeDamage_Imple_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_SSDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponTrapObject_Barricade, nullptr, "TakeDamage_Imple", nullptr, nullptr, sizeof(ELSSWeaponTrapObject_Barricade_eventTakeDamage_Imple_Parms), Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_NoRegister()
	{
		return AELSSWeaponTrapObject_Barricade::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBroken_MetaData[];
#endif
		static void NewProp_IsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_BeforeBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfile_BeforeBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_AfterBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfile_AfterBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_BeforeBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh_BeforeBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_AfterBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh_AfterBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Break_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Break;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanAfterBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanAfterBroken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponTrapObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_Break_Imple, "Break_Imple" }, // 557268465
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_OnRep_IsBroken, "OnRep_IsBroken" }, // 2456623321
		{ &Z_Construct_UFunction_AELSSWeaponTrapObject_Barricade_TakeDamage_Imple, "TakeDamage_Imple" }, // 2098032167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponTrapObject_Barricade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken_SetBit(void* Obj)
	{
		((AELSSWeaponTrapObject_Barricade*)Obj)->IsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken = { "IsBroken", "OnRep_IsBroken", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSWeaponTrapObject_Barricade), &Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_BeforeBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_BeforeBroken = { "CollisionProfile_BeforeBroken", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, CollisionProfile_BeforeBroken), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_BeforeBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_BeforeBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_AfterBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_AfterBroken = { "CollisionProfile_AfterBroken", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, CollisionProfile_AfterBroken), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_AfterBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_AfterBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_BeforeBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_BeforeBroken = { "SkeletalMesh_BeforeBroken", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SkeletalMesh_BeforeBroken), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_BeforeBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_BeforeBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_AfterBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_AfterBroken = { "SkeletalMesh_AfterBroken", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SkeletalMesh_AfterBroken), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_AfterBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_AfterBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SoundCue_Break_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SoundCue_Break = { "SoundCue_Break", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SoundCue_Break), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SoundCue_Break_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SoundCue_Break_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_DamageToPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_DamageToPlayer = { "DamageToPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, DamageToPlayer), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_DamageToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_DamageToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_LifeSpanAfterBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponTrapObject_Barricade" },
		{ "ModuleRelativePath", "Public/ELSSWeaponTrapObject_Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_LifeSpanAfterBroken = { "LifeSpanAfterBroken", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, LifeSpanAfterBroken), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_LifeSpanAfterBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_LifeSpanAfterBroken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_IsBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_BeforeBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_CollisionProfile_AfterBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_BeforeBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SkeletalMesh_AfterBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_SoundCue_Break,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_DamageToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::NewProp_LifeSpanAfterBroken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponTrapObject_Barricade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::ClassParams = {
		&AELSSWeaponTrapObject_Barricade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponTrapObject_Barricade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponTrapObject_Barricade, 2520695131);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponTrapObject_Barricade>()
	{
		return AELSSWeaponTrapObject_Barricade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponTrapObject_Barricade(Z_Construct_UClass_AELSSWeaponTrapObject_Barricade, &AELSSWeaponTrapObject_Barricade::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponTrapObject_Barricade"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponTrapObject_Barricade::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsBroken(TEXT("IsBroken"));

		const bool bIsValid = true
			&& Name_IsBroken == ClassReps[(int32)ENetFields_Private::IsBroken].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponTrapObject_Barricade"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponTrapObject_Barricade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
