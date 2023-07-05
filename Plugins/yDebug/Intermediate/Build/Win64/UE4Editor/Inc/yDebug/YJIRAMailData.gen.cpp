// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YJIRAMailData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYJIRAMailData() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYJIRAMailData();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailAttachment();
// End Cross Module References
class UScriptStruct* FYJIRAMailData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYJIRAMailData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYJIRAMailData, Z_Construct_UPackage__Script_yDebug(), TEXT("YJIRAMailData"), sizeof(FYJIRAMailData), Get_Z_Construct_UScriptStruct_FYJIRAMailData_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYJIRAMailData>()
{
	return FYJIRAMailData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYJIRAMailData(FYJIRAMailData::StaticStruct, TEXT("/Script/yDebug"), TEXT("YJIRAMailData"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYJIRAMailData
{
	FScriptStruct_yDebug_StaticRegisterNativesFYJIRAMailData()
	{
		UScriptStruct::DeferCppStructOps<FYJIRAMailData>(FName(TEXT("YJIRAMailData")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYJIRAMailData;
	struct Z_Construct_UScriptStruct_FYJIRAMailData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PortNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reporter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Summary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Repeatabiliry_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Repeatabiliry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatabiliryTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RepeatabiliryTimes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IssueType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYJIRAMailData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IPAddr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IPAddr = { "IPAddr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, IPAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IPAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IPAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_PortNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_PortNo = { "PortNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, PortNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_PortNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_PortNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Reporter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Reporter = { "Reporter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Reporter), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Reporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Reporter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_To_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Summary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Summary), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Summary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Repeatabiliry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Repeatabiliry = { "Repeatabiliry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Repeatabiliry), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Repeatabiliry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Repeatabiliry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_RepeatabiliryTimes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_RepeatabiliryTimes = { "RepeatabiliryTimes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, RepeatabiliryTimes), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_RepeatabiliryTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_RepeatabiliryTimes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_GameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IssueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IssueType = { "IssueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, IssueType), METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IssueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IssueType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYDBGMailAttachment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAMailData" },
		{ "ModuleRelativePath", "Public/YJIRAMailData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYJIRAMailData, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYJIRAMailData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IPAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_PortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Reporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Summary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Repeatabiliry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_RepeatabiliryTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_IssueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYJIRAMailData_Statics::NewProp_Attachments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYJIRAMailData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"YJIRAMailData",
		sizeof(FYJIRAMailData),
		alignof(FYJIRAMailData),
		Z_Construct_UScriptStruct_FYJIRAMailData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYJIRAMailData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYJIRAMailData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYJIRAMailData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YJIRAMailData"), sizeof(FYJIRAMailData), Get_Z_Construct_UScriptStruct_FYJIRAMailData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYJIRAMailData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYJIRAMailData_Hash() { return 3706812877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
