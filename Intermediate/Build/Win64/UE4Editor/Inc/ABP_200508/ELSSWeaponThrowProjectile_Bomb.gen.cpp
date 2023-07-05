// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrowProjectile_Bomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrowProjectile_Bomb() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_Bomb::execApplyDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_Bomb::execPerformOnImpact_Multicast)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformOnImpact_Multicast_Implementation(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_Bomb::execTakeDamageToAny)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TakeDamageToAny(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast = FName(TEXT("PerformOnImpact_Multicast"));
	void AELSSWeaponThrowProjectile_Bomb::PerformOnImpact_Multicast(FVector_NetQuantize10 const& NewLocation)
	{
		ELSSWeaponThrowProjectile_Bomb_eventPerformOnImpact_Multicast_Parms Parms;
		Parms.NewLocation=NewLocation;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast),&Parms);
	}
	void AELSSWeaponThrowProjectile_Bomb::StaticRegisterNativesAELSSWeaponThrowProjectile_Bomb()
	{
		UClass* Class = AELSSWeaponThrowProjectile_Bomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &AELSSWeaponThrowProjectile_Bomb::execApplyDamage },
			{ "PerformOnImpact_Multicast", &AELSSWeaponThrowProjectile_Bomb::execPerformOnImpact_Multicast },
			{ "TakeDamageToAny", &AELSSWeaponThrowProjectile_Bomb::execTakeDamageToAny },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb, nullptr, "ApplyDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Bomb_eventPerformOnImpact_Multicast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb, nullptr, "PerformOnImpact_Multicast", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_Bomb_eventPerformOnImpact_Multicast_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics
	{
		struct ELSSWeaponThrowProjectile_Bomb_eventTakeDamageToAny_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Bomb_eventTakeDamageToAny_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWeaponThrowProjectile_Bomb_eventTakeDamageToAny_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWeaponThrowProjectile_Bomb_eventTakeDamageToAny_Parms), &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb, nullptr, "TakeDamageToAny", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_Bomb_eventTakeDamageToAny_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_NoRegister()
	{
		return AELSSWeaponThrowProjectile_Bomb::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanAfterImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanAfterImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashEffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SplashEffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponThrowProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_ApplyDamage, "ApplyDamage" }, // 599148787
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_PerformOnImpact_Multicast, "PerformOnImpact_Multicast" }, // 3072813929
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Bomb_TakeDamageToAny, "TakeDamageToAny" }, // 2096755377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrowProjectile_Bomb.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_LifeSpanAfterImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Bomb" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_LifeSpanAfterImpact = { "LifeSpanAfterImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, LifeSpanAfterImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_LifeSpanAfterImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_LifeSpanAfterImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_SplashEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Bomb" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_SplashEffectDatabaseRowName = { "SplashEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, SplashEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_SplashEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_SplashEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_DamageRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Bomb" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, DamageRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_DamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_DamageRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_LifeSpanAfterImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_SplashEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::NewProp_DamageRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrowProjectile_Bomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::ClassParams = {
		&AELSSWeaponThrowProjectile_Bomb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrowProjectile_Bomb, 208011354);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrowProjectile_Bomb>()
	{
		return AELSSWeaponThrowProjectile_Bomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrowProjectile_Bomb(Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb, &AELSSWeaponThrowProjectile_Bomb::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrowProjectile_Bomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrowProjectile_Bomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
