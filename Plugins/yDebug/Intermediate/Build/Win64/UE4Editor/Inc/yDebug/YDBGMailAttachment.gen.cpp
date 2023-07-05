// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGMailAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGMailAttachment() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailAttachment();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDBGMailMIMEType();
// End Cross Module References
class UScriptStruct* FYDBGMailAttachment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYDBGMailAttachment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDBGMailAttachment, Z_Construct_UPackage__Script_yDebug(), TEXT("YDBGMailAttachment"), sizeof(FYDBGMailAttachment), Get_Z_Construct_UScriptStruct_FYDBGMailAttachment_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYDBGMailAttachment>()
{
	return FYDBGMailAttachment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDBGMailAttachment(FYDBGMailAttachment::StaticStruct, TEXT("/Script/yDebug"), TEXT("YDBGMailAttachment"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailAttachment
{
	FScriptStruct_yDebug_StaticRegisterNativesFYDBGMailAttachment()
	{
		UScriptStruct::DeferCppStructOps<FYDBGMailAttachment>(FName(TEXT("YDBGMailAttachment")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYDBGMailAttachment;
	struct Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MIMEType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIMEType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MIMEType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MimeTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MimeTypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverwriteFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertToZip_MetaData[];
#endif
		static void NewProp_ConvertToZip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConvertToZip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDBGMailAttachment>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType = { "MIMEType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailAttachment, MIMEType), Z_Construct_UEnum_yDebug_EYDBGMailMIMEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailAttachment, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailAttachment, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MimeTypeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MimeTypeName = { "MimeTypeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailAttachment, MimeTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MimeTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MimeTypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_OverwriteFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_OverwriteFileName = { "OverwriteFileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDBGMailAttachment, OverwriteFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_OverwriteFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_OverwriteFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGMailAttachment" },
		{ "ModuleRelativePath", "Public/YDBGMailAttachment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip_SetBit(void* Obj)
	{
		((FYDBGMailAttachment*)Obj)->ConvertToZip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip = { "ConvertToZip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FYDBGMailAttachment), &Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MIMEType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_RawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_MimeTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_OverwriteFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::NewProp_ConvertToZip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"YDBGMailAttachment",
		sizeof(FYDBGMailAttachment),
		alignof(FYDBGMailAttachment),
		Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailAttachment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDBGMailAttachment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDBGMailAttachment"), sizeof(FYDBGMailAttachment), Get_Z_Construct_UScriptStruct_FYDBGMailAttachment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDBGMailAttachment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDBGMailAttachment_Hash() { return 1753442981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
