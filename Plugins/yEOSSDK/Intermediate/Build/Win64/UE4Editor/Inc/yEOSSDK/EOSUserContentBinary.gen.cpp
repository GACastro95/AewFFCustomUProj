// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContentBinary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContentBinary() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserContentBinary::execGetOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentBinary::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentBinary::execIsDeleteInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeleteInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentBinary::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UEOSUserContentBinary::StaticRegisterNativesUEOSUserContentBinary()
	{
		UClass* Class = UEOSUserContentBinary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOffset", &UEOSUserContentBinary::execGetOffset },
			{ "GetTotalSize", &UEOSUserContentBinary::execGetTotalSize },
			{ "IsDeleteInstance", &UEOSUserContentBinary::execIsDeleteInstance },
			{ "IsValid", &UEOSUserContentBinary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics
	{
		struct EOSUserContentBinary_eventGetOffset_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentBinary_eventGetOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentBinary, nullptr, "GetOffset", nullptr, nullptr, sizeof(EOSUserContentBinary_eventGetOffset_Parms), Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentBinary_GetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentBinary_GetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics
	{
		struct EOSUserContentBinary_eventGetTotalSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentBinary_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentBinary, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(EOSUserContentBinary_eventGetTotalSize_Parms), Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics
	{
		struct EOSUserContentBinary_eventIsDeleteInstance_Parms
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
	void Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentBinary_eventIsDeleteInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentBinary_eventIsDeleteInstance_Parms), &Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentBinary, nullptr, "IsDeleteInstance", nullptr, nullptr, sizeof(EOSUserContentBinary_eventIsDeleteInstance_Parms), Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics
	{
		struct EOSUserContentBinary_eventIsValid_Parms
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
	void Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentBinary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentBinary_eventIsValid_Parms), &Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentBinary, nullptr, "IsValid", nullptr, nullptr, sizeof(EOSUserContentBinary_eventIsValid_Parms), Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentBinary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentBinary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister()
	{
		return UEOSUserContentBinary::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserContentBinary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserContentBinary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserContentBinary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserContentBinary_GetOffset, "GetOffset" }, // 188851653
		{ &Z_Construct_UFunction_UEOSUserContentBinary_GetTotalSize, "GetTotalSize" }, // 2717146198
		{ &Z_Construct_UFunction_UEOSUserContentBinary_IsDeleteInstance, "IsDeleteInstance" }, // 3735873212
		{ &Z_Construct_UFunction_UEOSUserContentBinary_IsValid, "IsValid" }, // 3844562610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContentBinary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserContentBinary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserContentBinary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserContentBinary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserContentBinary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserContentBinary_Statics::ClassParams = {
		&UEOSUserContentBinary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserContentBinary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentBinary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserContentBinary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserContentBinary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserContentBinary, 3987094856);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserContentBinary>()
	{
		return UEOSUserContentBinary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserContentBinary(Z_Construct_UClass_UEOSUserContentBinary, &UEOSUserContentBinary::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserContentBinary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserContentBinary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
