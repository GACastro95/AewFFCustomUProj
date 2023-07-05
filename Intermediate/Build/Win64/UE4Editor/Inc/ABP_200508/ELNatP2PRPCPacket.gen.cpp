// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNatP2PRPCPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNatP2PRPCPacket() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNatP2PRPCPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectMap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELNatP2PRPCPacket::execGetSentPacketSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSentPacketSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNatP2PRPCPacket::execResetSentPacketSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSentPacketSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNatP2PRPCPacket::execSendPacketBuffer)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_GET_ENUM(EEOSPacketReliability,Z_Param_Reliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPacketBuffer(Z_Param_Out_Buffer,EEOSPacketReliability(Z_Param_Reliability));
		P_NATIVE_END;
	}
	void UELNatP2PRPCPacket::StaticRegisterNativesUELNatP2PRPCPacket()
	{
		UClass* Class = UELNatP2PRPCPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSentPacketSize", &UELNatP2PRPCPacket::execGetSentPacketSize },
			{ "ResetSentPacketSize", &UELNatP2PRPCPacket::execResetSentPacketSize },
			{ "SendPacketBuffer", &UELNatP2PRPCPacket::execSendPacketBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics
	{
		struct ELNatP2PRPCPacket_eventGetSentPacketSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNatP2PRPCPacket_eventGetSentPacketSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNatP2PRPCPacket, nullptr, "GetSentPacketSize", nullptr, nullptr, sizeof(ELNatP2PRPCPacket_eventGetSentPacketSize_Parms), Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNatP2PRPCPacket, nullptr, "ResetSentPacketSize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics
	{
		struct ELNatP2PRPCPacket_eventSendPacketBuffer_Parms
		{
			TArray<uint8> Buffer;
			EEOSPacketReliability Reliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNatP2PRPCPacket_eventSendPacketBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Reliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Reliability = { "Reliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNatP2PRPCPacket_eventSendPacketBuffer_Parms, Reliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNatP2PRPCPacket_eventSendPacketBuffer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNatP2PRPCPacket_eventSendPacketBuffer_Parms), &Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Reliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_Reliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNatP2PRPCPacket, nullptr, "SendPacketBuffer", nullptr, nullptr, sizeof(ELNatP2PRPCPacket_eventSendPacketBuffer_Parms), Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister()
	{
		return UELNatP2PRPCPacket::StaticClass();
	}
	struct Z_Construct_UClass_UELNatP2PRPCPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentObjectMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentPacketSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SentPacketSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNatP2PRPCPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELNatP2PRPCPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELNatP2PRPCPacket_GetSentPacketSize, "GetSentPacketSize" }, // 486142082
		{ &Z_Construct_UFunction_UELNatP2PRPCPacket_ResetSentPacketSize, "ResetSentPacketSize" }, // 3263160296
		{ &Z_Construct_UFunction_UELNatP2PRPCPacket_SendPacketBuffer, "SendPacketBuffer" }, // 665458896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNatP2PRPCPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNatP2PRPCPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_CurrentObjectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNatP2PRPCPacket" },
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_CurrentObjectMap = { "CurrentObjectMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNatP2PRPCPacket, CurrentObjectMap), Z_Construct_UClass_UELNetObjectMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_CurrentObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_CurrentObjectMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_SentPacketSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNatP2PRPCPacket" },
		{ "ModuleRelativePath", "Public/ELNatP2PRPCPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_SentPacketSize = { "SentPacketSize", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNatP2PRPCPacket, SentPacketSize), METADATA_PARAMS(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_SentPacketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_SentPacketSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELNatP2PRPCPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_CurrentObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNatP2PRPCPacket_Statics::NewProp_SentPacketSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNatP2PRPCPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNatP2PRPCPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNatP2PRPCPacket_Statics::ClassParams = {
		&UELNatP2PRPCPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELNatP2PRPCPacket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNatP2PRPCPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNatP2PRPCPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNatP2PRPCPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNatP2PRPCPacket, 2937076967);
	template<> ABP_200508_API UClass* StaticClass<UELNatP2PRPCPacket>()
	{
		return UELNatP2PRPCPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNatP2PRPCPacket(Z_Construct_UClass_UELNatP2PRPCPacket, &UELNatP2PRPCPacket::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNatP2PRPCPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNatP2PRPCPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
