// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/JIRASetupParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJIRASetupParam() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASetupParam();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAFieldType();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAIssueType();
// End Cross Module References
class UScriptStruct* FJIRASetupParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FJIRASetupParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJIRASetupParam, Z_Construct_UPackage__Script_yDebug(), TEXT("JIRASetupParam"), sizeof(FJIRASetupParam), Get_Z_Construct_UScriptStruct_FJIRASetupParam_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FJIRASetupParam>()
{
	return FJIRASetupParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJIRASetupParam(FJIRASetupParam::StaticStruct, TEXT("/Script/yDebug"), TEXT("JIRASetupParam"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFJIRASetupParam
{
	FScriptStruct_yDebug_StaticRegisterNativesFJIRASetupParam()
	{
		UScriptStruct::DeferCppStructOps<FJIRASetupParam>(FName(TEXT("JIRASetupParam")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFJIRASetupParam;
	struct Z_Construct_UScriptStruct_FJIRASetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFields_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JQLForSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JQLForSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JQLForCurrentUserTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JQLForCurrentUserTask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IssueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IssueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientCertificationFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientCertificationFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJIRASetupParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ServerURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, ServerURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ServerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ServerURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ProjectName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, ProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ProjectName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_Inner = { "DefaultFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_yDebug_EJIRAFieldType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields = { "DefaultFields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, DefaultFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForSearch = { "JQLForSearch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, JQLForSearch), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForCurrentUserTask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForCurrentUserTask = { "JQLForCurrentUserTask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, JQLForCurrentUserTask), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForCurrentUserTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForCurrentUserTask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType = { "IssueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, IssueType), Z_Construct_UEnum_yDebug_EJIRAIssueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ClientCertificationFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASetupParam" },
		{ "ModuleRelativePath", "Public/JIRASetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ClientCertificationFilePath = { "ClientCertificationFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASetupParam, ClientCertificationFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ClientCertificationFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ClientCertificationFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJIRASetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ServerURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_DefaultFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_JQLForCurrentUserTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_IssueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASetupParam_Statics::NewProp_ClientCertificationFilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJIRASetupParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"JIRASetupParam",
		sizeof(FJIRASetupParam),
		alignof(FJIRASetupParam),
		Z_Construct_UScriptStruct_FJIRASetupParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASetupParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJIRASetupParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJIRASetupParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JIRASetupParam"), sizeof(FJIRASetupParam), Get_Z_Construct_UScriptStruct_FJIRASetupParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJIRASetupParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJIRASetupParam_Hash() { return 2503388405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
