// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/TextUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UTextUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UTextUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	DEFINE_FUNCTION(UTextUtil::execCompare)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_B);
		P_GET_UBOOL(Z_Param_bSensitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTextUtil::Compare(Z_Param_Out_A,Z_Param_Out_B,Z_Param_bSensitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextUtil::execLen)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTextUtil::Len(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	void UTextUtil::StaticRegisterNativesUTextUtil()
	{
		UClass* Class = UTextUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Compare", &UTextUtil::execCompare },
			{ "Len", &UTextUtil::execLen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextUtil_Compare_Statics
	{
		struct TextUtil_eventCompare_Parms
		{
			FText A;
			FText B;
			bool bSensitive;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensitive_MetaData[];
#endif
		static void NewProp_bSensitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSensitive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextUtil_eventCompare_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextUtil_eventCompare_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive_SetBit(void* Obj)
	{
		((TextUtil_eventCompare_Parms*)Obj)->bSensitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive = { "bSensitive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextUtil_eventCompare_Parms), &Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextUtil_eventCompare_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextUtil_Compare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_bSensitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Compare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Compare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextUtil_Compare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextUtil, nullptr, "Compare", nullptr, nullptr, sizeof(TextUtil_eventCompare_Parms), Z_Construct_UFunction_UTextUtil_Compare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Compare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Compare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Compare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextUtil_Compare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextUtil_Compare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextUtil_Len_Statics
	{
		struct TextUtil_eventLen_Parms
		{
			FText Text;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextUtil_eventLen_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextUtil_eventLen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextUtil_Len_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextUtil_Len_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextUtil_Len_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextUtil_Len_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextUtil, nullptr, "Len", nullptr, nullptr, sizeof(TextUtil_eventLen_Parms), Z_Construct_UFunction_UTextUtil_Len_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Len_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextUtil_Len_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextUtil_Len_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextUtil_Len()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextUtil_Len_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextUtil_NoRegister()
	{
		return UTextUtil::StaticClass();
	}
	struct Z_Construct_UClass_UTextUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextUtil_Compare, "Compare" }, // 2841652397
		{ &Z_Construct_UFunction_UTextUtil_Len, "Len" }, // 2533850426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TextUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TextUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextUtil_Statics::ClassParams = {
		&UTextUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextUtil, 2514593866);
	template<> ELITE_CORE_API UClass* StaticClass<UTextUtil>()
	{
		return UTextUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextUtil(Z_Construct_UClass_UTextUtil, &UTextUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UTextUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
