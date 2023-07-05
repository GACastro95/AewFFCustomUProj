// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrowProjectile_Oil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrowProjectile_Oil() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_Oil::execPerformOnImpact_Multicast)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_NewLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformOnImpact_Multicast_Implementation(Z_Param_NewLocation,Z_Param_inYaw);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponThrowProjectile_Oil_OnSpread = FName(TEXT("OnSpread"));
	void AELSSWeaponThrowProjectile_Oil::OnSpread()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_Oil_OnSpread),NULL);
	}
	static FName NAME_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast = FName(TEXT("PerformOnImpact_Multicast"));
	void AELSSWeaponThrowProjectile_Oil::PerformOnImpact_Multicast(FVector_NetQuantize10 const& NewLocation, float inYaw)
	{
		ELSSWeaponThrowProjectile_Oil_eventPerformOnImpact_Multicast_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.inYaw=inYaw;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast),&Parms);
	}
	void AELSSWeaponThrowProjectile_Oil::StaticRegisterNativesAELSSWeaponThrowProjectile_Oil()
	{
		UClass* Class = AELSSWeaponThrowProjectile_Oil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PerformOnImpact_Multicast", &AELSSWeaponThrowProjectile_Oil::execPerformOnImpact_Multicast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil, nullptr, "OnSpread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Oil_eventPerformOnImpact_Multicast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_inYaw = { "inYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Oil_eventPerformOnImpact_Multicast_Parms, inYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::NewProp_inYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil, nullptr, "PerformOnImpact_Multicast", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_Oil_eventPerformOnImpact_Multicast_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_NoRegister()
	{
		return AELSSWeaponThrowProjectile_Oil::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadPlacementProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpreadPlacementProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceOnImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceOnImpact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponThrowProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_OnSpread, "OnSpread" }, // 4201473442
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Oil_PerformOnImpact_Multicast, "PerformOnImpact_Multicast" }, // 2403440362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrowProjectile_Oil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_LifeSpanAfterImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Oil" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_LifeSpanAfterImpact = { "LifeSpanAfterImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, LifeSpanAfterImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_LifeSpanAfterImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_LifeSpanAfterImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SplashEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Oil" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SplashEffectDatabaseRowName = { "SplashEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, SplashEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SplashEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SplashEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SpreadPlacementProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Oil" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SpreadPlacementProfileName = { "SpreadPlacementProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, SpreadPlacementProfileName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SpreadPlacementProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SpreadPlacementProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_TraceDistanceOnImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Oil" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Oil.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_TraceDistanceOnImpact = { "TraceDistanceOnImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, TraceDistanceOnImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_TraceDistanceOnImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_TraceDistanceOnImpact_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_LifeSpanAfterImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SplashEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_SpreadPlacementProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::NewProp_TraceDistanceOnImpact,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrowProjectile_Oil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::ClassParams = {
		&AELSSWeaponThrowProjectile_Oil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrowProjectile_Oil, 1491530293);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrowProjectile_Oil>()
	{
		return AELSSWeaponThrowProjectile_Oil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrowProjectile_Oil(Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil, &AELSSWeaponThrowProjectile_Oil::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrowProjectile_Oil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrowProjectile_Oil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
