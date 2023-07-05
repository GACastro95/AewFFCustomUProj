// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PGameEventPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PGameEventPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameEventPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameEventPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventRequestType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PGameEventPacket::execGetGameEventRequestType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionGameEventRequestType*)Z_Param__Result=P_THIS->GetGameEventRequestType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameEventPacket::execGetGameEventType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionGameEventType*)Z_Param__Result=P_THIS->GetGameEventType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameEventPacket::execGetRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameEventPacket::execRequest)
	{
		P_GET_ENUM(EEOSSessionGameEventType,Z_Param__enEOSSessionGameEventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Request(EEOSSessionGameEventType(Z_Param__enEOSSessionGameEventType));
		P_NATIVE_END;
	}
	void UEOSSessionP2PGameEventPacket::StaticRegisterNativesUEOSSessionP2PGameEventPacket()
	{
		UClass* Class = UEOSSessionP2PGameEventPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameEventRequestType", &UEOSSessionP2PGameEventPacket::execGetGameEventRequestType },
			{ "GetGameEventType", &UEOSSessionP2PGameEventPacket::execGetGameEventType },
			{ "GetRequest", &UEOSSessionP2PGameEventPacket::execGetRequest },
			{ "Request", &UEOSSessionP2PGameEventPacket::execRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics
	{
		struct EOSSessionP2PGameEventPacket_eventGetGameEventRequestType_Parms
		{
			EEOSSessionGameEventRequestType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameEventPacket_eventGetGameEventRequestType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventRequestType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameEventPacket, nullptr, "GetGameEventRequestType", nullptr, nullptr, sizeof(EOSSessionP2PGameEventPacket_eventGetGameEventRequestType_Parms), Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics
	{
		struct EOSSessionP2PGameEventPacket_eventGetGameEventType_Parms
		{
			EEOSSessionGameEventType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameEventPacket_eventGetGameEventType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameEventPacket, nullptr, "GetGameEventType", nullptr, nullptr, sizeof(EOSSessionP2PGameEventPacket_eventGetGameEventType_Parms), Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics
	{
		struct EOSSessionP2PGameEventPacket_eventGetRequest_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameEventPacket_eventGetRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameEventPacket_eventGetRequest_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameEventPacket, nullptr, "GetRequest", nullptr, nullptr, sizeof(EOSSessionP2PGameEventPacket_eventGetRequest_Parms), Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics
	{
		struct EOSSessionP2PGameEventPacket_eventRequest_Parms
		{
			EEOSSessionGameEventType _enEOSSessionGameEventType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enEOSSessionGameEventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enEOSSessionGameEventType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp__enEOSSessionGameEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp__enEOSSessionGameEventType = { "_enEOSSessionGameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameEventPacket_eventRequest_Parms, _enEOSSessionGameEventType), Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameEventPacket_eventRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameEventPacket_eventRequest_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp__enEOSSessionGameEventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp__enEOSSessionGameEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameEventPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameEventPacket, nullptr, "Request", nullptr, nullptr, sizeof(EOSSessionP2PGameEventPacket_eventRequest_Parms), Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PGameEventPacket_NoRegister()
	{
		return UEOSSessionP2PGameEventPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventRequestType, "GetGameEventRequestType" }, // 4090579745
		{ &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetGameEventType, "GetGameEventType" }, // 3061455048
		{ &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_GetRequest, "GetRequest" }, // 3477511163
		{ &Z_Construct_UFunction_UEOSSessionP2PGameEventPacket_Request, "Request" }, // 1829600567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PGameEventPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameEventPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PGameEventPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::ClassParams = {
		&UEOSSessionP2PGameEventPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PGameEventPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PGameEventPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PGameEventPacket, 1537743285);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PGameEventPacket>()
	{
		return UEOSSessionP2PGameEventPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PGameEventPacket(Z_Construct_UClass_UEOSSessionP2PGameEventPacket, &UEOSSessionP2PGameEventPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PGameEventPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PGameEventPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
