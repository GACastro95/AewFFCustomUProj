// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomConfig::execGetCategoryInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAtomCategoryInfoParam>*)Z_Param__Result=USoundAtomConfig::GetCategoryInfoArray();
		P_NATIVE_END;
	}
	void USoundAtomConfig::StaticRegisterNativesUSoundAtomConfig()
	{
		UClass* Class = USoundAtomConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryInfoArray", &USoundAtomConfig::execGetCategoryInfoArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics
	{
		struct SoundAtomConfig_eventGetCategoryInfoArray_Parms
		{
			TArray<FAtomCategoryInfoParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCategoryInfoParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomConfig_eventGetCategoryInfoArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomConfig, nullptr, "GetCategoryInfoArray", nullptr, nullptr, sizeof(SoundAtomConfig_eventGetCategoryInfoArray_Parms), Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister()
	{
		return USoundAtomConfig::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcfFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcfFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray, "GetCategoryInfoArray" }, // 1055238812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomConfig" },
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath = { "AcfFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomConfig, AcfFilePath), METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams = {
		&USoundAtomConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomConfig, 734100823);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomConfig>()
	{
		return USoundAtomConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomConfig(Z_Construct_UClass_USoundAtomConfig, &USoundAtomConfig::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
