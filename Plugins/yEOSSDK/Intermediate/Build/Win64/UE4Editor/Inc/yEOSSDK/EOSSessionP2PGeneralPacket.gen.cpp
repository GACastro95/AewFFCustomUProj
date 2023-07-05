// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PGeneralPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PGeneralPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGeneralPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGeneralPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PGeneralPacket::execSetResponse)
	{
		P_GET_ENUM(EEOSSessionResponceType,Z_Param__enResponceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetResponse(EEOSSessionResponceType(Z_Param__enResponceType));
		P_NATIVE_END;
	}
	void UEOSSessionP2PGeneralPacket::StaticRegisterNativesUEOSSessionP2PGeneralPacket()
	{
		UClass* Class = UEOSSessionP2PGeneralPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetResponse", &UEOSSessionP2PGeneralPacket::execSetResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics
	{
		struct EOSSessionP2PGeneralPacket_eventSetResponse_Parms
		{
			EEOSSessionResponceType _enResponceType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enResponceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enResponceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp__enResponceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp__enResponceType = { "_enResponceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGeneralPacket_eventSetResponse_Parms, _enResponceType), Z_Construct_UEnum_yEOSSDK_EEOSSessionResponceType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGeneralPacket_eventSetResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGeneralPacket_eventSetResponse_Parms), &Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp__enResponceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp__enResponceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGeneralPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGeneralPacket, nullptr, "SetResponse", nullptr, nullptr, sizeof(EOSSessionP2PGeneralPacket_eventSetResponse_Parms), Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PGeneralPacket_NoRegister()
	{
		return UEOSSessionP2PGeneralPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PGeneralPacket_SetResponse, "SetResponse" }, // 1545282539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PGeneralPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PGeneralPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PGeneralPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::ClassParams = {
		&UEOSSessionP2PGeneralPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PGeneralPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PGeneralPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PGeneralPacket, 3741433221);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PGeneralPacket>()
	{
		return UEOSSessionP2PGeneralPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PGeneralPacket(Z_Construct_UClass_UEOSSessionP2PGeneralPacket, &UEOSSessionP2PGeneralPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PGeneralPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PGeneralPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
