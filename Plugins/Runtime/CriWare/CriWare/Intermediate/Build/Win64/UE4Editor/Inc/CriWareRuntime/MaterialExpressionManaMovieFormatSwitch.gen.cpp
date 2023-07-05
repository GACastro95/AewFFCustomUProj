// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/MaterialExpressionManaMovieFormatSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionManaMovieFormatSwitch() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticRegisterNativesUDEPRECATED_MaterialExpressionManaMovieFormatSwitch()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_NoRegister()
	{
		return UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialExpressionManaMovieFormatSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaMovieFormatSwitch" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Inputs, UDEPRECATED_MaterialExpressionManaMovieFormatSwitch), STRUCT_OFFSET(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MaterialExpressionManaMovieFormatSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::ClassParams = {
		&UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::PropPointers),
		0,
		0x020822A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, 1171918783);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UDEPRECATED_MaterialExpressionManaMovieFormatSwitch>()
	{
		return UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch(Z_Construct_UClass_UDEPRECATED_MaterialExpressionManaMovieFormatSwitch, &UDEPRECATED_MaterialExpressionManaMovieFormatSwitch::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UDEPRECATED_MaterialExpressionManaMovieFormatSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MaterialExpressionManaMovieFormatSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
