// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponMelee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponMelee() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponMelee_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponMelee();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponMelee::execDecreaseRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DecreaseRemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponMelee::execGetRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponMelee::execOnRep_RemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemainDurability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponMelee::execSetRemainDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Durability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemainDurability(Z_Param_Durability);
		P_NATIVE_END;
	}
	void AELSSWeaponMelee::StaticRegisterNativesAELSSWeaponMelee()
	{
		UClass* Class = AELSSWeaponMelee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseRemainDurability", &AELSSWeaponMelee::execDecreaseRemainDurability },
			{ "GetRemainDurability", &AELSSWeaponMelee::execGetRemainDurability },
			{ "OnRep_RemainDurability", &AELSSWeaponMelee::execOnRep_RemainDurability },
			{ "SetRemainDurability", &AELSSWeaponMelee::execSetRemainDurability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics
	{
		struct ELSSWeaponMelee_eventDecreaseRemainDurability_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponMelee_eventDecreaseRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponMelee, nullptr, "DecreaseRemainDurability", nullptr, nullptr, sizeof(ELSSWeaponMelee_eventDecreaseRemainDurability_Parms), Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics
	{
		struct ELSSWeaponMelee_eventGetRemainDurability_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponMelee_eventGetRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponMelee, nullptr, "GetRemainDurability", nullptr, nullptr, sizeof(ELSSWeaponMelee_eventGetRemainDurability_Parms), Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponMelee, nullptr, "OnRep_RemainDurability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics
	{
		struct ELSSWeaponMelee_eventSetRemainDurability_Parms
		{
			int32 Durability;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Durability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponMelee_eventSetRemainDurability_Parms, Durability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::NewProp_Durability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponMelee, nullptr, "SetRemainDurability", nullptr, nullptr, sizeof(ELSSWeaponMelee_eventSetRemainDurability_Parms), Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponMelee_NoRegister()
	{
		return AELSSWeaponMelee::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainDurability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponMelee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponMelee_DecreaseRemainDurability, "DecreaseRemainDurability" }, // 227275759
		{ &Z_Construct_UFunction_AELSSWeaponMelee_GetRemainDurability, "GetRemainDurability" }, // 1744348577
		{ &Z_Construct_UFunction_AELSSWeaponMelee_OnRep_RemainDurability, "OnRep_RemainDurability" }, // 3454002505
		{ &Z_Construct_UFunction_AELSSWeaponMelee_SetRemainDurability, "SetRemainDurability" }, // 2545516016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponMelee_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponMelee.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponMelee_Statics::NewProp_RemainDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponMelee" },
		{ "ModuleRelativePath", "Public/ELSSWeaponMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponMelee_Statics::NewProp_RemainDurability = { "RemainDurability", "OnRep_RemainDurability", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponMelee, RemainDurability), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponMelee_Statics::NewProp_RemainDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponMelee_Statics::NewProp_RemainDurability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponMelee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponMelee_Statics::NewProp_RemainDurability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponMelee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponMelee_Statics::ClassParams = {
		&AELSSWeaponMelee::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponMelee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponMelee_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponMelee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponMelee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponMelee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponMelee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponMelee, 2632569021);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponMelee>()
	{
		return AELSSWeaponMelee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponMelee(Z_Construct_UClass_AELSSWeaponMelee, &AELSSWeaponMelee::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponMelee"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponMelee::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RemainDurability(TEXT("RemainDurability"));

		const bool bIsValid = true
			&& Name_RemainDurability == ClassReps[(int32)ENetFields_Private::RemainDurability].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponMelee"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponMelee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
