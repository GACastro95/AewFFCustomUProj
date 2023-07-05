// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSSanitizePartyChat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSSanitizePartyChat() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizePartyChat_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizePartyChat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature();
// End Cross Module References
	void UELEOSSanitizePartyChat::StaticRegisterNativesUELEOSSanitizePartyChat()
	{
	}
	UClass* Z_Construct_UClass_UELEOSSanitizePartyChat_NoRegister()
	{
		return UELEOSSanitizePartyChat::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSSanitizePartyChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizePartyChatEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SanitizePartyChatEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSSanitizePartyChat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSSanitizePartyChat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSanitizePartyChat" },
		{ "ModuleRelativePath", "Public/ELEOSSanitizePartyChat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSSanitizePartyChat, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_SanitizePartyChatEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSanitizePartyChat" },
		{ "ModuleRelativePath", "Public/ELEOSSanitizePartyChat.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_SanitizePartyChatEvent = { "SanitizePartyChatEvent", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSSanitizePartyChat, SanitizePartyChatEvent), Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_SanitizePartyChatEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_SanitizePartyChatEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_DataID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSanitizePartyChat" },
		{ "ModuleRelativePath", "Public/ELEOSSanitizePartyChat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_DataID = { "DataID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSSanitizePartyChat, DataID), METADATA_PARAMS(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_DataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_DataID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_SanitizePartyChatEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::NewProp_DataID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSSanitizePartyChat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::ClassParams = {
		&UELEOSSanitizePartyChat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSSanitizePartyChat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSSanitizePartyChat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSSanitizePartyChat, 3808492119);
	template<> ABP_200508_API UClass* StaticClass<UELEOSSanitizePartyChat>()
	{
		return UELEOSSanitizePartyChat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSSanitizePartyChat(Z_Construct_UClass_UELEOSSanitizePartyChat, &UELEOSSanitizePartyChat::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSSanitizePartyChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSSanitizePartyChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
