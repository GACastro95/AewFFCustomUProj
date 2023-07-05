// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorAsset() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditColorAsset_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditColorAsset();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAsset();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorList();
// End Cross Module References
	DEFINE_FUNCTION(UEditColorAsset::execGetGroupColors)
	{
		P_GET_STRUCT(FEditColorGroupID,Z_Param_inGroupId);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ColorIDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGroupColors(Z_Param_inGroupId,Z_Param_Out_ColorIDList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditColorAsset::execGetIndexedColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorID);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIndexedColor(Z_Param_ColorID,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	void UEditColorAsset::StaticRegisterNativesUEditColorAsset()
	{
		UClass* Class = UEditColorAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroupColors", &UEditColorAsset::execGetGroupColors },
			{ "GetIndexedColor", &UEditColorAsset::execGetIndexedColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics
	{
		struct EditColorAsset_eventGetGroupColors_Parms
		{
			FEditColorGroupID inGroupId;
			TArray<int32> ColorIDList;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inGroupId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorIDList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorIDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_inGroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_inGroupId = { "inGroupId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditColorAsset_eventGetGroupColors_Parms, inGroupId), Z_Construct_UScriptStruct_FEditColorGroupID, METADATA_PARAMS(Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_inGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_inGroupId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ColorIDList_Inner = { "ColorIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ColorIDList = { "ColorIDList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditColorAsset_eventGetGroupColors_Parms, ColorIDList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditColorAsset_eventGetGroupColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditColorAsset_eventGetGroupColors_Parms), &Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_inGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ColorIDList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ColorIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditColorAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditColorAsset, nullptr, "GetGroupColors", nullptr, nullptr, sizeof(EditColorAsset_eventGetGroupColors_Parms), Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditColorAsset_GetGroupColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditColorAsset_GetGroupColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics
	{
		struct EditColorAsset_eventGetIndexedColor_Parms
		{
			int32 ColorID;
			FLinearColor Out;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ColorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ColorID = { "ColorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditColorAsset_eventGetIndexedColor_Parms, ColorID), METADATA_PARAMS(Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ColorID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditColorAsset_eventGetIndexedColor_Parms, Out), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditColorAsset_eventGetIndexedColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditColorAsset_eventGetIndexedColor_Parms), &Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditColorAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditColorAsset, nullptr, "GetIndexedColor", nullptr, nullptr, sizeof(EditColorAsset_eventGetIndexedColor_Parms), Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditColorAsset_GetIndexedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditColorAsset_GetIndexedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditColorAsset_NoRegister()
	{
		return UEditColorAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEditColorAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditColorAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditColorAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditColorAsset_GetGroupColors, "GetGroupColors" }, // 1602100078
		{ &Z_Construct_UFunction_UEditColorAsset_GetIndexedColor, "GetIndexedColor" }, // 3131703799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditColorAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditColorAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditColorAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditColorList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorGroupID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorAsset" },
		{ "ModuleRelativePath", "Public/EditColorAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditColorAsset, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditColorAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditColorAsset_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditColorAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditColorAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditColorAsset_Statics::ClassParams = {
		&UEditColorAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditColorAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditColorAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditColorAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditColorAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditColorAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditColorAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditColorAsset, 1062556903);
	template<> CREATION_API UClass* StaticClass<UEditColorAsset>()
	{
		return UEditColorAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditColorAsset(Z_Construct_UClass_UEditColorAsset, &UEditColorAsset::StaticClass, TEXT("/Script/Creation"), TEXT("UEditColorAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditColorAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
