// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FL_EditItemUtilityFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_EditItemUtilityFunctions() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFL_EditItemUtilityFunctions_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFL_EditItemUtilityFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Common();
// End Cross Module References
	DEFINE_FUNCTION(UFL_EditItemUtilityFunctions::execGetUnlockItemID_Common)
	{
		P_GET_STRUCT_REF(FEditItem_Common,Z_Param_Out_EditItem);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_EditItemUtilityFunctions::GetUnlockItemID_Common(Z_Param_Out_EditItem,Z_Param_Out_UnlockItemId);
		P_NATIVE_END;
	}
	void UFL_EditItemUtilityFunctions::StaticRegisterNativesUFL_EditItemUtilityFunctions()
	{
		UClass* Class = UFL_EditItemUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnlockItemID_Common", &UFL_EditItemUtilityFunctions::execGetUnlockItemID_Common },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics
	{
		struct FL_EditItemUtilityFunctions_eventGetUnlockItemID_Common_Parms
		{
			FEditItem_Common EditItem;
			int32 UnlockItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_EditItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_EditItem = { "EditItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtilityFunctions_eventGetUnlockItemID_Common_Parms, EditItem), Z_Construct_UScriptStruct_FEditItem_Common, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_EditItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_EditItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditItemUtilityFunctions_eventGetUnlockItemID_Common_Parms, UnlockItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_EditItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::NewProp_UnlockItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditItemUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditItemUtilityFunctions, nullptr, "GetUnlockItemID_Common", nullptr, nullptr, sizeof(FL_EditItemUtilityFunctions_eventGetUnlockItemID_Common_Parms), Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_EditItemUtilityFunctions_NoRegister()
	{
		return UFL_EditItemUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_EditItemUtilityFunctions_GetUnlockItemID_Common, "GetUnlockItemID_Common" }, // 1212034794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_EditItemUtilityFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_EditItemUtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_EditItemUtilityFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::ClassParams = {
		&UFL_EditItemUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_EditItemUtilityFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_EditItemUtilityFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_EditItemUtilityFunctions, 3654149339);
	template<> CREATION_API UClass* StaticClass<UFL_EditItemUtilityFunctions>()
	{
		return UFL_EditItemUtilityFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_EditItemUtilityFunctions(Z_Construct_UClass_UFL_EditItemUtilityFunctions, &UFL_EditItemUtilityFunctions::StaticClass, TEXT("/Script/Creation"), TEXT("UFL_EditItemUtilityFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_EditItemUtilityFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
