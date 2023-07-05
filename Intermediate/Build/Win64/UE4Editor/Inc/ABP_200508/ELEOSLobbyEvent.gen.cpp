// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyEvent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyEvent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
// End Cross Module References
	void UELEOSLobbyEvent::StaticRegisterNativesUELEOSLobbyEvent()
	{
	}
	UClass* Z_Construct_UClass_UELEOSLobbyEvent_NoRegister()
	{
		return UELEOSLobbyEvent::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommunityEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CommunityEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Community_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Community;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyEvent" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent = { "CommunityEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyEvent, CommunityEvent), Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_Community_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyEvent" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_Community = { "Community", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyEvent, Community), Z_Construct_UClass_UEOSCommunityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_Community_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_Community_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyEvent" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityInfo = { "CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyEvent, CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyEvent" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityUser = { "CommunityUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyEvent, CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_Community,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyEvent_Statics::NewProp_CommunityUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyEvent_Statics::ClassParams = {
		&UELEOSLobbyEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELEOSLobbyEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyEvent, 2649573951);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyEvent>()
	{
		return UELEOSLobbyEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyEvent(Z_Construct_UClass_UELEOSLobbyEvent, &UELEOSLobbyEvent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
