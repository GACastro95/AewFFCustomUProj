// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGMailBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGMailBody() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailBody();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailAttachment();
// End Cross Module References
class UScriptStruct* FYDBGMailBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYDBGMailBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDBGMailBody, Z_Construct_UPackage__Script_yDebug(), TEXT("YDBGMailBody"), sizeof(FYDBGMailBody), Get_Z_Construct_UScriptStruct_FYDBGMailBody_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYDBGMailBody>()
{
	return FYDBGMailBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDBGMailBody(FYDBGMailBody::StaticStruct, TEXT("/Script/yDebug"), TEXT("YDBGMailBody"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailBody
{
	FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailBody()
	{
		UScriptStruct::DeferCppStructOps<FYDBGMailBody>(FName(TEXT("YDBGMailBody")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYDBGMailBody;
	struct Z_Construct_UScriptStruct_FYDBGMailBody_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHTMLFormat_MetaData[];
#endif
		static void NewProp_UseHTMLFormat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHTMLFormat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDBGMailBody.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDBGMailBody>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailBody" },
		{ "ModuleRelativePath", "Public/YDBGMailBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailBody, Subject), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailBody" },
		{ "ModuleRelativePath", "Public/YDBGMailBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailBody, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailBody" },
		{ "ModuleRelativePath", "Public/YDBGMailBody.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat_SetBit(void* Obj)
	{
		((FYDBGMailBody*)Obj)->UseHTMLFormat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat = { "UseHTMLFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FYDBGMailBody), &Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYDBGMailAttachment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailBody" },
		{ "ModuleRelativePath", "Public/YDBGMailBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailBody, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDBGMailBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_UseHTMLFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailBody_Statics::NewProp_Attachments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDBGMailBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"YDBGMailBody",
		sizeof(FYDBGMailBody),
		alignof(FYDBGMailBody),
		Z_Construct_UScriptStruct_FYDBGMailBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDBGMailBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDBGMailBody"), sizeof(FYDBGMailBody), Get_Z_Construct_UScriptStruct_FYDBGMailBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDBGMailBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDBGMailBody_Hash() { return 1265656577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
