// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionP2PPacketGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionP2PPacketGenerator() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USessionP2PPacketGenerator_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USessionP2PPacketGenerator();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(USessionP2PPacketGenerator::execCreateSessionP2PPacketGenerator)
	{
		P_GET_OBJECT_REF(USessionP2PPacketGenerator,Z_Param_Out__pcInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USessionP2PPacketGenerator::CreateSessionP2PPacketGenerator(Z_Param_Out__pcInstance);
		P_NATIVE_END;
	}
	void USessionP2PPacketGenerator::StaticRegisterNativesUSessionP2PPacketGenerator()
	{
		UClass* Class = USessionP2PPacketGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSessionP2PPacketGenerator", &USessionP2PPacketGenerator::execCreateSessionP2PPacketGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics
	{
		struct SessionP2PPacketGenerator_eventCreateSessionP2PPacketGenerator_Parms
		{
			USessionP2PPacketGenerator* _pcInstance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp__pcInstance = { "_pcInstance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionP2PPacketGenerator_eventCreateSessionP2PPacketGenerator_Parms, _pcInstance), Z_Construct_UClass_USessionP2PPacketGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SessionP2PPacketGenerator_eventCreateSessionP2PPacketGenerator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SessionP2PPacketGenerator_eventCreateSessionP2PPacketGenerator_Parms), &Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp__pcInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionP2PPacketGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionP2PPacketGenerator, nullptr, "CreateSessionP2PPacketGenerator", nullptr, nullptr, sizeof(SessionP2PPacketGenerator_eventCreateSessionP2PPacketGenerator_Parms), Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USessionP2PPacketGenerator_NoRegister()
	{
		return USessionP2PPacketGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USessionP2PPacketGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USessionP2PPacketGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USessionP2PPacketGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionP2PPacketGenerator_CreateSessionP2PPacketGenerator, "CreateSessionP2PPacketGenerator" }, // 1814430347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USessionP2PPacketGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SessionP2PPacketGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SessionP2PPacketGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USessionP2PPacketGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionP2PPacketGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USessionP2PPacketGenerator_Statics::ClassParams = {
		&USessionP2PPacketGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USessionP2PPacketGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USessionP2PPacketGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USessionP2PPacketGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USessionP2PPacketGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USessionP2PPacketGenerator, 2617309957);
	template<> ABP_200508_API UClass* StaticClass<USessionP2PPacketGenerator>()
	{
		return USessionP2PPacketGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USessionP2PPacketGenerator(Z_Construct_UClass_USessionP2PPacketGenerator, &USessionP2PPacketGenerator::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USessionP2PPacketGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USessionP2PPacketGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
