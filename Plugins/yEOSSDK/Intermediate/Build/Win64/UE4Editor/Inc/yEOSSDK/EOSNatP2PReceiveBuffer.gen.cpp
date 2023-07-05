// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PReceiveBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PReceiveBuffer() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PReceiveBuffer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PReceiveBuffer();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSNatP2PReceiveBuffer::StaticRegisterNativesUEOSNatP2PReceiveBuffer()
	{
	}
	UClass* Z_Construct_UClass_UEOSNatP2PReceiveBuffer_NoRegister()
	{
		return UEOSNatP2PReceiveBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReceiveBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReceiveBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PBinary,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PReceiveBuffer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PReceiveBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer_Inner = { "ReceiveBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PReceiveBuffer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PReceiveBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer = { "ReceiveBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PReceiveBuffer, ReceiveBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::NewProp_ReceiveBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PReceiveBuffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::ClassParams = {
		&UEOSNatP2PReceiveBuffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PReceiveBuffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PReceiveBuffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PReceiveBuffer, 688476343);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PReceiveBuffer>()
	{
		return UEOSNatP2PReceiveBuffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PReceiveBuffer(Z_Construct_UClass_UEOSNatP2PReceiveBuffer, &UEOSNatP2PReceiveBuffer::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PReceiveBuffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PReceiveBuffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
