// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PBinary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PBinary() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PBinary::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PBinary::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PBinary::execInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init(Z_Param__sSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PBinary::execIsDeleteInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeleteInstance();
		P_NATIVE_END;
	}
	void UEOSNatP2PBinary::StaticRegisterNativesUEOSNatP2PBinary()
	{
		UClass* Class = UEOSNatP2PBinary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannel", &UEOSNatP2PBinary::execGetChannel },
			{ "GetSize", &UEOSNatP2PBinary::execGetSize },
			{ "Init", &UEOSNatP2PBinary::execInit },
			{ "IsDeleteInstance", &UEOSNatP2PBinary::execIsDeleteInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics
	{
		struct EOSNatP2PBinary_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PBinary_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PBinary, nullptr, "GetChannel", nullptr, nullptr, sizeof(EOSNatP2PBinary_eventGetChannel_Parms), Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics
	{
		struct EOSNatP2PBinary_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PBinary_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PBinary, nullptr, "GetSize", nullptr, nullptr, sizeof(EOSNatP2PBinary_eventGetSize_Parms), Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PBinary_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PBinary_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics
	{
		struct EOSNatP2PBinary_eventInit_Parms
		{
			int32 _sSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp__sSize = { "_sSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PBinary_eventInit_Parms, _sSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PBinary_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PBinary_eventInit_Parms), &Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp__sSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PBinary, nullptr, "Init", nullptr, nullptr, sizeof(EOSNatP2PBinary_eventInit_Parms), Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PBinary_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PBinary_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics
	{
		struct EOSNatP2PBinary_eventIsDeleteInstance_Parms
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
	void Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PBinary_eventIsDeleteInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PBinary_eventIsDeleteInstance_Parms), &Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PBinary, nullptr, "IsDeleteInstance", nullptr, nullptr, sizeof(EOSNatP2PBinary_eventIsDeleteInstance_Parms), Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister()
	{
		return UEOSNatP2PBinary::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PBinary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PBinary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PBinary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PBinary_GetChannel, "GetChannel" }, // 4196755676
		{ &Z_Construct_UFunction_UEOSNatP2PBinary_GetSize, "GetSize" }, // 3449219449
		{ &Z_Construct_UFunction_UEOSNatP2PBinary_Init, "Init" }, // 158113452
		{ &Z_Construct_UFunction_UEOSNatP2PBinary_IsDeleteInstance, "IsDeleteInstance" }, // 712564342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PBinary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PBinary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PBinary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PBinary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PBinary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PBinary_Statics::ClassParams = {
		&UEOSNatP2PBinary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PBinary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PBinary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PBinary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PBinary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PBinary, 3153541577);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PBinary>()
	{
		return UEOSNatP2PBinary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PBinary(Z_Construct_UClass_UEOSNatP2PBinary, &UEOSNatP2PBinary::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PBinary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PBinary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
