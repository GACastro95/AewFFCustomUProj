// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TemplateScoutAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateScoutAsset() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
// End Cross Module References
	DEFINE_FUNCTION(UTemplateScoutAsset::execGenerateFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTemplateScoutAsset::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGender*)Z_Param__Result=P_THIS->GetGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTemplateScoutAsset::execGetUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetUID();
		P_NATIVE_END;
	}
	void UTemplateScoutAsset::StaticRegisterNativesUTemplateScoutAsset()
	{
		UClass* Class = UTemplateScoutAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateFileName", &UTemplateScoutAsset::execGenerateFileName },
			{ "GetGender", &UTemplateScoutAsset::execGetGender },
			{ "GetUID", &UTemplateScoutAsset::execGetUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics
	{
		struct TemplateScoutAsset_eventGenerateFileName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutAsset_eventGenerateFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutAsset, nullptr, "GenerateFileName", nullptr, nullptr, sizeof(TemplateScoutAsset_eventGenerateFileName_Parms), Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics
	{
		struct TemplateScoutAsset_eventGetGender_Parms
		{
			EGender ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutAsset_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutAsset, nullptr, "GetGender", nullptr, nullptr, sizeof(TemplateScoutAsset_eventGetGender_Parms), Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutAsset_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutAsset_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics
	{
		struct TemplateScoutAsset_eventGetUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutAsset_eventGetUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutAsset, nullptr, "GetUID", nullptr, nullptr, sizeof(TemplateScoutAsset_eventGetUID_Parms), Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutAsset_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutAsset_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister()
	{
		return UTemplateScoutAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateScoutAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetupData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetupData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlainAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastDataVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateScoutAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateScoutAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateScoutAsset_GenerateFileName, "GenerateFileName" }, // 2575228506
		{ &Z_Construct_UFunction_UTemplateScoutAsset_GetGender, "GetGender" }, // 207964287
		{ &Z_Construct_UFunction_UTemplateScoutAsset_GetUID, "GetUID" }, // 188343633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TemplateScoutAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_SetupData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_SetupData = { "SetupData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutAsset, SetupData), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_SetupData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_SetupData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PlainAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PlainAttire = { "PlainAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutAsset, PlainAttire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PlainAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PlainAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PoseID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PoseID = { "PoseID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutAsset, PoseID), METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PoseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PoseID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_DataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutAsset, DataVersion), METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_LastDataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_LastDataVersion = { "LastDataVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutAsset, LastDataVersion), METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_LastDataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_LastDataVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateScoutAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_SetupData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PlainAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_PoseID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_DataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutAsset_Statics::NewProp_LastDataVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateScoutAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateScoutAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateScoutAsset_Statics::ClassParams = {
		&UTemplateScoutAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTemplateScoutAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateScoutAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateScoutAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateScoutAsset, 490787046);
	template<> ABP_200508_API UClass* StaticClass<UTemplateScoutAsset>()
	{
		return UTemplateScoutAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateScoutAsset(Z_Construct_UClass_UTemplateScoutAsset, &UTemplateScoutAsset::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UTemplateScoutAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateScoutAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
