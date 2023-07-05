// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSP2PPacketQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSP2PPacketQueue() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSP2PPacketQueue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSP2PPacketQueue::StaticRegisterNativesUEOSP2PPacketQueue()
	{
	}
	UClass* Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister()
	{
		return UEOSP2PPacketQueue::StaticClass();
	}
	struct Z_Construct_UClass_UEOSP2PPacketQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSP2PPacketQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSP2PPacketQueue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSP2PPacketQueue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSP2PPacketQueue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSP2PPacketQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSP2PPacketQueue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSP2PPacketQueue_Statics::ClassParams = {
		&UEOSP2PPacketQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSP2PPacketQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSP2PPacketQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSP2PPacketQueue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSP2PPacketQueue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSP2PPacketQueue, 3351565370);
	template<> YEOSSDK_API UClass* StaticClass<UEOSP2PPacketQueue>()
	{
		return UEOSP2PPacketQueue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSP2PPacketQueue(Z_Construct_UClass_UEOSP2PPacketQueue, &UEOSP2PPacketQueue::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSP2PPacketQueue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSP2PPacketQueue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
