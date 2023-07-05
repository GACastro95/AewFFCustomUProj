// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSEnvQueryGenerator_ActorsOfClassBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSEnvQueryGenerator_ActorsOfClassBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
// End Cross Module References
	void UELSSEnvQueryGenerator_ActorsOfClassBase::StaticRegisterNativesUELSSEnvQueryGenerator_ActorsOfClassBase()
	{
	}
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_NoRegister()
	{
		return UELSSEnvQueryGenerator_ActorsOfClassBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckStormOutside_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckStormOutside;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSEnvQueryGenerator_ActorsOfClassBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfClassBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::NewProp_CheckStormOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSEnvQueryGenerator_ActorsOfClassBase" },
		{ "ModuleRelativePath", "Public/ELSSEnvQueryGenerator_ActorsOfClassBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::NewProp_CheckStormOutside = { "CheckStormOutside", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSEnvQueryGenerator_ActorsOfClassBase, CheckStormOutside), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::NewProp_CheckStormOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::NewProp_CheckStormOutside_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::NewProp_CheckStormOutside,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSEnvQueryGenerator_ActorsOfClassBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::ClassParams = {
		&UELSSEnvQueryGenerator_ActorsOfClassBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSEnvQueryGenerator_ActorsOfClassBase, 1955637753);
	template<> ABP_200508_API UClass* StaticClass<UELSSEnvQueryGenerator_ActorsOfClassBase>()
	{
		return UELSSEnvQueryGenerator_ActorsOfClassBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase(Z_Construct_UClass_UELSSEnvQueryGenerator_ActorsOfClassBase, &UELSSEnvQueryGenerator_ActorsOfClassBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSEnvQueryGenerator_ActorsOfClassBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSEnvQueryGenerator_ActorsOfClassBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
