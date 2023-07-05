// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/PopupOnlineChatMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopupOnlineChatMessage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineChatMessage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FPopupOnlineChatMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopupOnlineChatMessage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("PopupOnlineChatMessage"), sizeof(FPopupOnlineChatMessage), Get_Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FPopupOnlineChatMessage>()
{
	return FPopupOnlineChatMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPopupOnlineChatMessage(FPopupOnlineChatMessage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("PopupOnlineChatMessage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineChatMessage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineChatMessage()
	{
		UScriptStruct::DeferCppStructOps<FPopupOnlineChatMessage>(FName(TEXT("PopupOnlineChatMessage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineChatMessage;
	struct Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DispMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PopupOnlineChatMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopupOnlineChatMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PopupOnlineChatMessage" },
		{ "ModuleRelativePath", "Public/PopupOnlineChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPopupOnlineChatMessage, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_DispMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PopupOnlineChatMessage" },
		{ "ModuleRelativePath", "Public/PopupOnlineChatMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_DispMessage = { "DispMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPopupOnlineChatMessage, DispMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_DispMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_DispMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::NewProp_DispMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"PopupOnlineChatMessage",
		sizeof(FPopupOnlineChatMessage),
		alignof(FPopupOnlineChatMessage),
		Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineChatMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PopupOnlineChatMessage"), sizeof(FPopupOnlineChatMessage), Get_Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineChatMessage_Hash() { return 583988906U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
