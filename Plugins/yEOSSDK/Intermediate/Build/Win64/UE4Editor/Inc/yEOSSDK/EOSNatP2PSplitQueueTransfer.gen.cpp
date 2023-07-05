// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PSplitQueueTransfer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PSplitQueueTransfer() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState();
// End Cross Module References
	void UEOSNatP2PSplitQueueTransfer::StaticRegisterNativesUEOSNatP2PSplitQueueTransfer()
	{
	}
	UClass* Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_NoRegister()
	{
		return UEOSNatP2PSplitQueueTransfer::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cReceivedSplitPacketMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cReceivedSplitPacketMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cReceivedSplitPacketMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cReceivedSplitPacketMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cReceivedPacketMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cReceivedPacketMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cReceivedPacketMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cReceivedPacketMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sCurrentSendPacketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sCurrentSendPacketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bWaitAllP2PConnections_MetaData[];
#endif
		static void NewProp_m_bWaitAllP2PConnections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bWaitAllP2PConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bWaitingAllP2PConnections_MetaData[];
#endif
		static void NewProp_m_bWaitingAllP2PConnections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bWaitingAllP2PConnections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cConnectionStateMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cConnectionStateMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cConnectionStateMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cConnectionStateMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sCompressionPacketSizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sCompressionPacketSizeThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PQueueTransfer,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PSplitQueueTransfer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_ValueProp = { "m_cReceivedSplitPacketMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_Key_KeyProp = { "m_cReceivedSplitPacketMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap = { "m_cReceivedSplitPacketMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSplitQueueTransfer, m_cReceivedSplitPacketMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_ValueProp = { "m_cReceivedPacketMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSNatP2PReceivedPacketBuffer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_Key_KeyProp = { "m_cReceivedPacketMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap = { "m_cReceivedPacketMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSplitQueueTransfer, m_cReceivedPacketMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCurrentSendPacketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCurrentSendPacketId = { "m_sCurrentSendPacketId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSplitQueueTransfer, m_sCurrentSendPacketId), METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCurrentSendPacketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCurrentSendPacketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	void Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections_SetBit(void* Obj)
	{
		((UEOSNatP2PSplitQueueTransfer*)Obj)->m_bWaitAllP2PConnections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections = { "m_bWaitAllP2PConnections", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSNatP2PSplitQueueTransfer), &Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	void Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections_SetBit(void* Obj)
	{
		((UEOSNatP2PSplitQueueTransfer*)Obj)->m_bWaitingAllP2PConnections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections = { "m_bWaitingAllP2PConnections", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSNatP2PSplitQueueTransfer), &Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_ValueProp = { "m_cConnectionStateMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSNatP2PSplitQueueTransferConnectionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_Key_KeyProp = { "m_cConnectionStateMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap = { "m_cConnectionStateMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSplitQueueTransfer, m_cConnectionStateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCompressionPacketSizeThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCompressionPacketSizeThreshold = { "m_sCompressionPacketSizeThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSplitQueueTransfer, m_sCompressionPacketSizeThreshold), METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCompressionPacketSizeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCompressionPacketSizeThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedSplitPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cReceivedPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCurrentSendPacketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitAllP2PConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_bWaitingAllP2PConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_cConnectionStateMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::NewProp_m_sCompressionPacketSizeThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PSplitQueueTransfer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::ClassParams = {
		&UEOSNatP2PSplitQueueTransfer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PSplitQueueTransfer, 4238303028);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PSplitQueueTransfer>()
	{
		return UEOSNatP2PSplitQueueTransfer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PSplitQueueTransfer(Z_Construct_UClass_UEOSNatP2PSplitQueueTransfer, &UEOSNatP2PSplitQueueTransfer::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PSplitQueueTransfer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PSplitQueueTransfer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
