// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/NameUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UNameUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UNameUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	DEFINE_FUNCTION(UNameUtil::execIsNone)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNameUtil::IsNone(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	void UNameUtil::StaticRegisterNativesUNameUtil()
	{
		UClass* Class = UNameUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsNone", &UNameUtil::execIsNone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNameUtil_IsNone_Statics
	{
		struct NameUtil_eventIsNone_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NameUtil_eventIsNone_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NameUtil_eventIsNone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NameUtil_eventIsNone_Parms), &Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNameUtil_IsNone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNameUtil_IsNone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNameUtil_IsNone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NameUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNameUtil_IsNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNameUtil, nullptr, "IsNone", nullptr, nullptr, sizeof(NameUtil_eventIsNone_Parms), Z_Construct_UFunction_UNameUtil_IsNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNameUtil_IsNone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNameUtil_IsNone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNameUtil_IsNone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNameUtil_IsNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNameUtil_IsNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNameUtil_NoRegister()
	{
		return UNameUtil::StaticClass();
	}
	struct Z_Construct_UClass_UNameUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNameUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNameUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNameUtil_IsNone, "IsNone" }, // 4127812517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNameUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NameUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NameUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNameUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNameUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNameUtil_Statics::ClassParams = {
		&UNameUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNameUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNameUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNameUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNameUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNameUtil, 315783590);
	template<> ELITE_CORE_API UClass* StaticClass<UNameUtil>()
	{
		return UNameUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNameUtil(Z_Construct_UClass_UNameUtil, &UNameUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UNameUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNameUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
