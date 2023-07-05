// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/JIRASearchParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJIRASearchParam() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchParam();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAIssueType();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAFieldType();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchCondition();
// End Cross Module References
class UScriptStruct* FJIRASearchParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FJIRASearchParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJIRASearchParam, Z_Construct_UPackage__Script_yDebug(), TEXT("JIRASearchParam"), sizeof(FJIRASearchParam), Get_Z_Construct_UScriptStruct_FJIRASearchParam_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FJIRASearchParam>()
{
	return FJIRASearchParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJIRASearchParam(FJIRASearchParam::StaticStruct, TEXT("/Script/yDebug"), TEXT("JIRASearchParam"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchParam
{
	FScriptStruct_yDebug_StaticRegisterNativesFJIRASearchParam()
	{
		UScriptStruct::DeferCppStructOps<FJIRASearchParam>(FName(TEXT("JIRASearchParam")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFJIRASearchParam;
	struct Z_Construct_UScriptStruct_FJIRASearchParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefault_MetaData[];
#endif
		static void NewProp_UseDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDefault;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IssueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IssueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fields_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JQL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JQL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOverrideProject_MetaData[];
#endif
		static void NewProp_UseOverrideProject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOverrideProject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Project;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJIRASearchParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_StartAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_StartAt = { "StartAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, StartAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_StartAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_StartAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_MaxResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, MaxResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_MaxResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_MaxResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault_SetBit(void* Obj)
	{
		((FJIRASearchParam*)Obj)->UseDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault = { "UseDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJIRASearchParam), &Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType = { "IssueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, IssueType), Z_Construct_UEnum_yDebug_EJIRAIssueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_yDebug_EJIRAFieldType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJIRASearchCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_JQL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_JQL = { "JQL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, JQL), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_JQL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_JQL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject_SetBit(void* Obj)
	{
		((FJIRASearchParam*)Obj)->UseOverrideProject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject = { "UseOverrideProject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJIRASearchParam), &Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Project_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JIRASearchParam" },
		{ "ModuleRelativePath", "Public/JIRASearchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJIRASearchParam, Project), METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Project_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Project_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJIRASearchParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_StartAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_IssueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_JQL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_UseOverrideProject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJIRASearchParam_Statics::NewProp_Project,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJIRASearchParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"JIRASearchParam",
		sizeof(FJIRASearchParam),
		alignof(FJIRASearchParam),
		Z_Construct_UScriptStruct_FJIRASearchParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJIRASearchParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJIRASearchParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JIRASearchParam"), sizeof(FJIRASearchParam), Get_Z_Construct_UScriptStruct_FJIRASearchParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJIRASearchParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJIRASearchParam_Hash() { return 1598401337U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
