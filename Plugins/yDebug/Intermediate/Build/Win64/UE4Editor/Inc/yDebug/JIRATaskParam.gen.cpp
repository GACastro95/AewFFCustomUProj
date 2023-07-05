// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/JIRATaskParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJIRATaskParam() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRATaskParam();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAIssueType();
// End Cross Module References
class UScriptStruct* FJIRATaskParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FJIRATaskParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJIRATaskParam, Z_Construct_UPackage__Script_yDebug(), TEXT("JIRATaskParam"), sizeof(FJIRATaskParam), Get_Z_Construct_UScriptStruct_FJIRATaskParam_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FJIRATaskParam>()
{
	return FJIRATaskParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJIRATaskParam(FJIRATaskParam::StaticStruct, TEXT("/Script/yDebug"), TEXT("JIRATaskParam"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFJIRATaskParam
{
	FScriptStruct_yDebug_StaticRegisterNativesFJIRATaskParam()
	{
		UScriptStruct::DeferCppStructOps<FJIRATaskParam>(FName(TEXT("JIRATaskParam")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFJIRATaskParam;
	struct Z_Construct_UScriptStruct_FJIRATaskParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IssueKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideProject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideProject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Summary;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IssueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IssueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReporterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssigneeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssigneeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJIRATaskParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueKey = { "IssueKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, IssueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_OverrideProject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_OverrideProject = { "OverrideProject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, OverrideProject), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_OverrideProject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_OverrideProject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Summary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, Summary), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Summary_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType = { "IssueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, IssueType), Z_Construct_UEnum_yDebug_EJIRAIssueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_ReporterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_ReporterName = { "ReporterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, ReporterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_ReporterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_ReporterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_AssigneeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_AssigneeName = { "AssigneeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, AssigneeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_AssigneeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_AssigneeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRATaskParam" },
		{ "ModuleRelativePath", "Public/JIRATaskParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRATaskParam, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJIRATaskParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_OverrideProject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Summary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_IssueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_ReporterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_AssigneeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRATaskParam_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJIRATaskParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"JIRATaskParam",
		sizeof(FJIRATaskParam),
		alignof(FJIRATaskParam),
		Z_Construct_UScriptStruct_FJIRATaskParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRATaskParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJIRATaskParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJIRATaskParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JIRATaskParam"), sizeof(FJIRATaskParam), Get_Z_Construct_UScriptStruct_FJIRATaskParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJIRATaskParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJIRATaskParam_Hash() { return 3843728298U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
