// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrowProjectile_Pushpin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrowProjectile_Pushpin() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrowProjectile_Pushpin::execPerformOnImpact_Multicast)
	{
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_NewLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformOnImpact_Multicast_Implementation(Z_Param_NewLocation,Z_Param_inYaw);
		P_NATIVE_END;
	}
	static FName NAME_AELSSWeaponThrowProjectile_Pushpin_OnSpread = FName(TEXT("OnSpread"));
	void AELSSWeaponThrowProjectile_Pushpin::OnSpread()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_Pushpin_OnSpread),NULL);
	}
	static FName NAME_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast = FName(TEXT("PerformOnImpact_Multicast"));
	void AELSSWeaponThrowProjectile_Pushpin::PerformOnImpact_Multicast(FVector_NetQuantize10 const& NewLocation, float inYaw)
	{
		ELSSWeaponThrowProjectile_Pushpin_eventPerformOnImpact_Multicast_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.inYaw=inYaw;
		ProcessEvent(FindFunctionChecked(NAME_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast),&Parms);
	}
	void AELSSWeaponThrowProjectile_Pushpin::StaticRegisterNativesAELSSWeaponThrowProjectile_Pushpin()
	{
		UClass* Class = AELSSWeaponThrowProjectile_Pushpin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PerformOnImpact_Multicast", &AELSSWeaponThrowProjectile_Pushpin::execPerformOnImpact_Multicast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin, nullptr, "OnSpread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Pushpin_eventPerformOnImpact_Multicast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_NewLocation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_inYaw = { "inYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrowProjectile_Pushpin_eventPerformOnImpact_Multicast_Parms, inYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::NewProp_inYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin, nullptr, "PerformOnImpact_Multicast", nullptr, nullptr, sizeof(ELSSWeaponThrowProjectile_Pushpin_eventPerformOnImpact_Multicast_Parms), Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_NoRegister()
	{
		return AELSSWeaponThrowProjectile_Pushpin::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSteppedOn_MetaData[];
#endif
		static void NewProp_IsSteppedOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSteppedOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Pushpin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Pushpin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponThrowProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_OnSpread, "OnSpread" }, // 1943936828
		{ &Z_Construct_UFunction_AELSSWeaponThrowProjectile_Pushpin_PerformOnImpact_Multicast, "PerformOnImpact_Multicast" }, // 1249203091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrowProjectile_Pushpin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_LifeSpanAfterImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_LifeSpanAfterImpact = { "LifeSpanAfterImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, LifeSpanAfterImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_LifeSpanAfterImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_LifeSpanAfterImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SplashEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SplashEffectDatabaseRowName = { "SplashEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SplashEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SplashEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SplashEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SpreadPlacementProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SpreadPlacementProfileName = { "SpreadPlacementProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SpreadPlacementProfileName), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SpreadPlacementProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SpreadPlacementProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_TraceDistanceOnImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_TraceDistanceOnImpact = { "TraceDistanceOnImpact", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, TraceDistanceOnImpact), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_TraceDistanceOnImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_TraceDistanceOnImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	void Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn_SetBit(void* Obj)
	{
		((AELSSWeaponThrowProjectile_Pushpin*)Obj)->IsSteppedOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn = { "IsSteppedOn", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSWeaponThrowProjectile_Pushpin), &Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SoundCue_Pushpin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrowProjectile_Pushpin" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrowProjectile_Pushpin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SoundCue_Pushpin = { "SoundCue_Pushpin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SoundCue_Pushpin), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SoundCue_Pushpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SoundCue_Pushpin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_LifeSpanAfterImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SplashEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SpreadPlacementProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_TraceDistanceOnImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_IsSteppedOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::NewProp_SoundCue_Pushpin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrowProjectile_Pushpin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::ClassParams = {
		&AELSSWeaponThrowProjectile_Pushpin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrowProjectile_Pushpin, 738382137);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrowProjectile_Pushpin>()
	{
		return AELSSWeaponThrowProjectile_Pushpin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrowProjectile_Pushpin(Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin, &AELSSWeaponThrowProjectile_Pushpin::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrowProjectile_Pushpin"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponThrowProjectile_Pushpin::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsSteppedOn(TEXT("IsSteppedOn"));

		const bool bIsValid = true
			&& Name_IsSteppedOn == ClassReps[(int32)ENetFields_Private::IsSteppedOn].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponThrowProjectile_Pushpin"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrowProjectile_Pushpin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
