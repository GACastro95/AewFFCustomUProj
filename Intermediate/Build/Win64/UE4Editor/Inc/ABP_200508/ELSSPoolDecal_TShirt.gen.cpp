// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPoolDecal_TShirt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPoolDecal_TShirt() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecal_TShirt_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecal_TShirt();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecalBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(AELSSPoolDecal_TShirt::execApplyBadge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewBadgeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyBadge_Implementation(Z_Param_NewBadgeId);
		P_NATIVE_END;
	}
	static FName NAME_AELSSPoolDecal_TShirt_ApplyBadge = FName(TEXT("ApplyBadge"));
	void AELSSPoolDecal_TShirt::ApplyBadge(int32 NewBadgeId)
	{
		ELSSPoolDecal_TShirt_eventApplyBadge_Parms Parms;
		Parms.NewBadgeId=NewBadgeId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPoolDecal_TShirt_ApplyBadge),&Parms);
	}
	void AELSSPoolDecal_TShirt::StaticRegisterNativesAELSSPoolDecal_TShirt()
	{
		UClass* Class = AELSSPoolDecal_TShirt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyBadge", &AELSSPoolDecal_TShirt::execApplyBadge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewBadgeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::NewProp_NewBadgeId = { "NewBadgeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecal_TShirt_eventApplyBadge_Parms, NewBadgeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::NewProp_NewBadgeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolDecal_TShirt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPoolDecal_TShirt, nullptr, "ApplyBadge", nullptr, nullptr, sizeof(ELSSPoolDecal_TShirt_eventApplyBadge_Parms), Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSPoolDecal_TShirt_NoRegister()
	{
		return AELSSPoolDecal_TShirt::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_badgeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_badgeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBadgeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBadgeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidBadgeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InvalidBadgeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSPoolDecalBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSPoolDecal_TShirt_ApplyBadge, "ApplyBadge" }, // 590583447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPoolDecal_TShirt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecal_TShirt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_badgeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecal_TShirt" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecal_TShirt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_badgeId = { "badgeId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPoolDecal_TShirt, badgeId), METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_badgeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_badgeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_DefaultBadgeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecal_TShirt" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecal_TShirt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_DefaultBadgeId = { "DefaultBadgeId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPoolDecal_TShirt, DefaultBadgeId), METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_DefaultBadgeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_DefaultBadgeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_InvalidBadgeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecal_TShirt" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecal_TShirt.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_InvalidBadgeId = { "InvalidBadgeId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPoolDecal_TShirt, InvalidBadgeId), METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_InvalidBadgeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_InvalidBadgeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_badgeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_DefaultBadgeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::NewProp_InvalidBadgeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPoolDecal_TShirt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::ClassParams = {
		&AELSSPoolDecal_TShirt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPoolDecal_TShirt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPoolDecal_TShirt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPoolDecal_TShirt, 3881021011);
	template<> ABP_200508_API UClass* StaticClass<AELSSPoolDecal_TShirt>()
	{
		return AELSSPoolDecal_TShirt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPoolDecal_TShirt(Z_Construct_UClass_AELSSPoolDecal_TShirt, &AELSSPoolDecal_TShirt::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPoolDecal_TShirt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPoolDecal_TShirt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
