// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FL_EditWrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_EditWrestler() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFL_EditWrestler_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFL_EditWrestler();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryData();
// End Cross Module References
	DEFINE_FUNCTION(UFL_EditWrestler::execAppend)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryData,Z_Param_Out_A);
		P_GET_STRUCT_REF(FEditPartsCategoryData,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEditPartsCategoryData*)Z_Param__Result=UFL_EditWrestler::Append(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UFL_EditWrestler::StaticRegisterNativesUFL_EditWrestler()
	{
		UClass* Class = UFL_EditWrestler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Append", &UFL_EditWrestler::execAppend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_EditWrestler_Append_Statics
	{
		struct FL_EditWrestler_eventAppend_Parms
		{
			FEditPartsCategoryData A;
			FEditPartsCategoryData B;
			FEditPartsCategoryData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditWrestler_eventAppend_Parms, A), Z_Construct_UScriptStruct_FEditPartsCategoryData, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditWrestler_eventAppend_Parms, B), Z_Construct_UScriptStruct_FEditPartsCategoryData, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditWrestler_eventAppend_Parms, ReturnValue), Z_Construct_UScriptStruct_FEditPartsCategoryData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditWrestler, nullptr, "Append", nullptr, nullptr, sizeof(FL_EditWrestler_eventAppend_Parms), Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditWrestler_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditWrestler_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_EditWrestler_NoRegister()
	{
		return UFL_EditWrestler::StaticClass();
	}
	struct Z_Construct_UClass_UFL_EditWrestler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_EditWrestler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_EditWrestler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_EditWrestler_Append, "Append" }, // 3104327387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_EditWrestler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_EditWrestler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_EditWrestler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_EditWrestler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_EditWrestler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_EditWrestler_Statics::ClassParams = {
		&UFL_EditWrestler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_EditWrestler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_EditWrestler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_EditWrestler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_EditWrestler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_EditWrestler, 3073674874);
	template<> CREATION_API UClass* StaticClass<UFL_EditWrestler>()
	{
		return UFL_EditWrestler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_EditWrestler(Z_Construct_UClass_UFL_EditWrestler, &UFL_EditWrestler::StaticClass, TEXT("/Script/Creation"), TEXT("UFL_EditWrestler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_EditWrestler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
