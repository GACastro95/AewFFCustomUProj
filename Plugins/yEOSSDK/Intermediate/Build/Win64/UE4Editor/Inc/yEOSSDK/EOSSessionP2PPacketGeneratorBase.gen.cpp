// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PPacketGeneratorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PPacketGeneratorBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PPacketGeneratorBase::execCreatePacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPacket);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreatePacket(Z_Param_Out__pcPacket,Z_Param__sPacketType);
		P_NATIVE_END;
	}
	void UEOSSessionP2PPacketGeneratorBase::StaticRegisterNativesUEOSSessionP2PPacketGeneratorBase()
	{
		UClass* Class = UEOSSessionP2PPacketGeneratorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePacket", &UEOSSessionP2PPacketGeneratorBase::execCreatePacket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics
	{
		struct EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacket;
			int32 _sPacketType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp__pcPacket = { "_pcPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms, _pcPacket), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp__pcPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketGeneratorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase, nullptr, "CreatePacket", nullptr, nullptr, sizeof(EOSSessionP2PPacketGeneratorBase_eventCreatePacket_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_NoRegister()
	{
		return UEOSSessionP2PPacketGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketGeneratorBase_CreatePacket, "CreatePacket" }, // 2044492417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PPacketGeneratorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketGeneratorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PPacketGeneratorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::ClassParams = {
		&UEOSSessionP2PPacketGeneratorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PPacketGeneratorBase, 1342455235);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PPacketGeneratorBase>()
	{
		return UEOSSessionP2PPacketGeneratorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PPacketGeneratorBase(Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase, &UEOSSessionP2PPacketGeneratorBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PPacketGeneratorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PPacketGeneratorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
