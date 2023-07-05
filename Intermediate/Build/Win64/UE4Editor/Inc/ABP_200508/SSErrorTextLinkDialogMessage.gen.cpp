// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSErrorTextLinkDialogMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSErrorTextLinkDialogMessage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSErrorTextLinkDialogMessage>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSErrorTextLinkDialogMessage cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSErrorTextLinkDialogMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSErrorTextLinkDialogMessage"), sizeof(FSSErrorTextLinkDialogMessage), Get_Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSErrorTextLinkDialogMessage>()
{
	return FSSErrorTextLinkDialogMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSErrorTextLinkDialogMessage(FSSErrorTextLinkDialogMessage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSErrorTextLinkDialogMessage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextLinkDialogMessage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextLinkDialogMessage()
	{
		UScriptStruct::DeferCppStructOps<FSSErrorTextLinkDialogMessage>(FName(TEXT("SSErrorTextLinkDialogMessage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextLinkDialogMessage;
	struct Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinkType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LinkText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSErrorTextLinkDialogMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSErrorTextLinkDialogMessage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextLinkDialogMessage" },
		{ "ModuleRelativePath", "Public/SSErrorTextLinkDialogMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType = { "LinkType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextLinkDialogMessage, LinkType), Z_Construct_UEnum_yGS2Client_EErrDialogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextLinkDialogMessage" },
		{ "ModuleRelativePath", "Public/SSErrorTextLinkDialogMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkText = { "LinkText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextLinkDialogMessage, LinkText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::NewProp_LinkText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSErrorTextLinkDialogMessage",
		sizeof(FSSErrorTextLinkDialogMessage),
		alignof(FSSErrorTextLinkDialogMessage),
		Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSErrorTextLinkDialogMessage"), sizeof(FSSErrorTextLinkDialogMessage), Get_Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage_Hash() { return 1578940531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
